/*Given a graph which represents a flow network where every edge has a capacity. 
Also given two vertices source ‘s’ and sink ‘t’ in the graph, find the maximum possible 
flow from s to t with following constraints:

a) Flow on an edge doesn’t exceed the given capacity of the edge.

b) Incoming flow is equal to outgoing flow for every vertex except s and t.*/

/*      https://brilliant.org/wiki/ford-fulkerson-algorithm/

PSEUDO CODE FOR FORD FOLKERSON
initialize flow to 0
path = findAugmentingPath(G, s, t)
while path exists:
    augment flow along path                 #This is purposefully ambiguous for now
    G_f = createResidualGraph()
    path = findAugmentingPath(G_f, s, t)
return flow*/



#include<iostream>
#include<list>

using namespace std;

bool bfs(int** rgrph,int src,int sink,int* parentarr,int n){

	int visited[n];
	int i;
	for(i=0;i<n;i++)visited[i]=0;

	list<int> queue;
	queue.push_back(src);
	visited[src]=1;
	parentarr[src]=-1;

	int u,v;
	while(!queue.empty()){
	
		u=queue.front();
		queue.pop_front();
		for(v=0;v<n;v++){

			if(rgrph[u][v] && !(visited[v])){

				queue.push_back(v);
				parentarr[v]=u;
				visited[v]=1;
			}
		}
	}

	if(visited[sink]){
		return true;
	}
	else return false;
}

int fordfulk(int** grph,const int n){

	int** rgrph;
	int src,sink;
	int i,j,u,v;
	cout<<"Enter source ans sink"<<endl;
	cin>>src>>sink;
	rgrph= new int[n][n];
	
	// Residual graph where rGraph[i][j] indicates 
                     // residual capacity of edge from i to j (if there
                     // is an edge. If rGraph[i][j] is 0, then there is not) 
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)rgrph[i][j]=grph[i][j];
	}
	
	int parentarr[n];
	int maxflow=0;//There is no flow initially
	int pathflow;

	//Augment the flow while tere is path from source to sink
	while(bfs(rgrph,src,sink,parentarr,n)){

		//move along the path from sink to src to find min residual capacity
		pathflow=100000;
		for(v=sink;v!=src;v=parentarr[v]){

			pathflow=min(pathflow,rgrph[parentarr[v]][v]);
		}

		for(v=sink;v!=src;v=parentarr[v]){

			u=parentarr[v];
			rgrph[u][v]-=pathflow;
			rgrph[v][u]+=pathflow;

		}
		maxflow=maxflow+pathflow;

	}

}

int main()
{
	const int n;
	int i,j;
	cout<<"Entr nmbr of vertex";
	cin>>n;
	int** grph;
	grph=new int[n][n];

	

	for(i=0;i<n;i++){
		for(j=0;j<n;j++)cin>>grph[i][j];
	}
	int maxflow=fordfulk(grph,n);
				


	return 0;
}
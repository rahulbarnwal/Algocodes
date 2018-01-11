#include<iostream>
#include<list>
using namespace std;

class Graph{
	int v;
	list<int> *adj;
	//adj is pointer to list of ints//neigbouring elemnts of any vertex is stored as list

public:
	Graph(int n){
		v=n;
		adj=new list<int>[v];//similar to int* x;x=new int[n];
	}
	void addEdge(int a,int b){
		adj[a].push_back(b);//we are conisdring directed graph hence adding edge to a to b only
	}

	void BFS(int s){
		int* visitarr=new int[v];
		
		int i;
		for(i=0;i<v;i++)visitarr[i]=0;//0 implies all vertices are unvisited
		int x;
		list<int> queue;//queue is needed to implemet BFS ie visiting ivertices in breadth fashion
		queue.push_back(s);
		visitarr[s]=1;

		//iterator to transverse queue
		
		while(!queue.empty()){
			x=queue.front();
			//visitarr[x]=1;
			cout<<x<<"->";
			queue.pop_front();

			list<int>::iterator it;
			for(it=adj[x].begin();it!=adj[x].end();++it){

				if(visitarr[*it]!=1)
				{
					visitarr[*it]=1;
					queue.push_back(*it);

				}
			}
		}
	}
	void isBipartite(int s);

};

void  Graph:: isBipartite(int s){

	 int* visitarr=new int[v];//verteices already visited made 1
	 int* colorarr=new int[v];//Vertices r colored as red (1) nd Blue (-1)
		
		int i,t,x;
		for(i=0;i<v;i++){visitarr[i]=0; colorarr[i]=0;}//0 implies all vertices are unvisited
		
		list<int> queue;//queue is needed to implemet BFS ie visiting ivertices in breadth fashion
		queue.push_back(s);
		visitarr[s]=1;
		colorarr[s]=1;

		//iterator to transverse queue
		
		while(!queue.empty()){
			x=queue.front();
			//visitarr[x]=1;
			cout<<x<<"->";
			queue.pop_front();

			list<int>::iterator it;
			for(it=adj[x].begin();it!=adj[x].end();++it){

				if(colorarr[*it]==colorarr[x]){cout<<"Graph is not bipartite"; return;}
				if(visitarr[*it]!=1)
				{
					colorarr[*it]=colorarr[x]*-1;
					visitarr[*it]=1;
					queue.push_back(*it);

				}
			}
		}
		cout<<"Graph is Bipartite";
	}



int main(){
	
	cout<<"Enter nmbr of vertex";
	int n,s,i,x,t;
	cin>>n;
	Graph g=Graph(n);
	for(i=0;i<n;i++){
		cout<<"Enter numbr of vertices connected with "<<i<<"th vertex";
		cin>>x;
		cout<<"\nEnter the vertices now::";
		while(x){cin>>t; g.addEdge(i,t); x--;}
	}
	
	cout<<"Enter sourse vertex:";
	cin>>s;
	g.isBipartite(s);

return 0;
}
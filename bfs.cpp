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

};
int main(){
	
	cout<<"Enter nmbr of vertex";
	int n,s;
	cin>>n;
	Graph g=Graph(n);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
	cin>>s;
	g.BFS(s);

return 0;
}
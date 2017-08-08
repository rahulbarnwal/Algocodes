#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct Adlistnode{
	int nodenmbr;
	struct Adlistnode* next;
}Adlistnode;

typedef struct graph{
	int V;
	struct Adlistnode** array;
}graph;


graph* Creategraph(int V){

	struct graph* g= new graph;
	g->V=V;
	g->array=(Adlistnode**)malloc(V*sizeof(Adlistnode*));
	int i;
	for(i=0;i<V;i++)
		{
			(g->array[i])->next=NULL;
			((g->array[i])->nodenmbr=-1); //nodenumber =-1 implies it is head node.
		}
	return g;	

}

void addEdge(graph* g, int s,int d){
	Adlistnode* newnode=new Adlistnode;
	newnode->next=NULL;
	newnode->nodenmbr=d;

	Adlistnode* head=g->array[s];

	while(head->next!=NULL)head=head->next;

	head->next=newnode;

}

void printgraph(graph* g){

	int v;
	Adlistnode* head;
	for(v=0;v< (g->V);v++){

		head=(g->array[v]);
		cout<<v<<"->";
		while(head->next!=NULL && head->nodenmbr!=-1)
			cout<<head->nodenmbr<<"->";
		cout<<endl;
	}

}

int main(){
	int V;
	cout<<"enter nmbr of veretx";
	cin>>V;
	graph* g=Creategraph(V);

	addEdge(g, 0, 1);
    addEdge(g, 0, 4);
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);
    addEdge(g, 2, 3);
    addEdge(g, 3, 4);

    printgraph(g);
}
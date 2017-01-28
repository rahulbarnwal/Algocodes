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

using namespace std;

void main()
{
	int x;
	


	return 0;
}
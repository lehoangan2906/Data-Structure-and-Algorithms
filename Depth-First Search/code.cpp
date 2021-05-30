// depth first search
/* 
1. Create a recursive function that takes the index of node and a visited array.
2. Mark the current node as visited and print the node.
3. Traverse all the adjacent and unmarked nodes and call the recursive function with index of adjacent node.
*/

#include <bits/stdc++.h>
#define pb push_back
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
class Graph{
    public:
        map<int, bool> visited;
        map<int, list<int> > adj;

        // function to add an edge to graph
        void addEdge(int v, int w){
            adj[v].pb(w); // ADD w to v's list.
        }

        // DFS traversal of the vertices reachable from v
        void DFS(int v){

            // Mark the current node as visited and print it
            visited[v] = true;
            cout << v << " ";

            // recur for all the vertices adjacent to this vertex
            list<int>::iterator i;
            for (i = adj[v].begin(); i != adj[v].end(); ++i){
                if(!visited[*i])
                    DFS(*i);
        }
    }
};
    


int main(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);

    cout << "Following is Depth First Traversal starting from vertex 2 \n";

    g.DFS(2);

    return 0;
}

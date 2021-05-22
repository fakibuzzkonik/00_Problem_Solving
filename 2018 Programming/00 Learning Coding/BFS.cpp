// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v + 1<< "\n head ";
            //range_declaration : range_expression
            for (auto x : adj[v])
            cout << "-> " << x+1;

        printf("\n");
    }
}

void BFS(vector<int> adj[], int V, int s){

    // Mark all the vertices as not visited
    bool visited[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

// Driver code
int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 1-1, 2-1);
    addEdge(adj, 1-1, 3-1);
    addEdge(adj, 2-1, 5-1);
    addEdge(adj, 2-1, 4-1);
    addEdge(adj, 3-1, 5-1);
    addEdge(adj, 4-1, 5-1);
    addEdge(adj, 4-1, 5-1);
    addEdge(adj, 5-1, 6-1);

    printGraph(adj, V);


    return 0;
}

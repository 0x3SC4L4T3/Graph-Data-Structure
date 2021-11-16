#include "Graph.h"

template<typename T>
Graph<T>::Graph(int V)
{
    this->vertices = V;
    this->adj = new vector<T>[vertices];
}

/**
* A function to add edge in the graph adjency list
* param1 : v-> node to be connected
* param2 : u -> node that is going to connect with an edge
*/
template<typename T>
void Graph<T>::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}


/**
* A function to delete edge in the graph adjency list
* param1 : v-> node that is connected to v
* param2 : u -> node that is connected to u
* Algorithm: The function traverse each vector and delete the vertex (u from v and vice versa) using erase function for vectors
*/

template<typename T>
void Graph<T>::delEdge(int u, int v)
{
    bool deleted = false;
    for (int i = 0; i < adj[u].size(); i++) {
        if (adj[u][i] == v) {
            adj[u].erase(adj[u].begin() + i);
            deleted = true;
            break;
        }
    }

    for (int i = 0; i < adj[v].size(); i++) {
        if (adj[v][i] == u) {
            adj[v].erase(adj[v].begin() + i);
            break;
        }
    }

    if (deleted) {
        cout << "Deleted an edge found between vertex " << u << " and" << v << endl;
    }
    else {
        cout << "Edge not found\n";
    }
}

/**
* A function to print the graph in a specific manner, the idea of printing is to
* first print the vertex and then all connected vertices with it making an edge between them
*/

template<typename T>
void Graph<T>::printGraph()
{
    cout << "Printing the graph:\n";
    for (int v = 0; v < this->vertices; ++v) {
        cout << "vertex " << v << " ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << "\n";;
    }
    cout << "\n";
}


/**
* A function to find edge in the graph adjency list between u and v vertices.
* param1 : v-> node that is connected to v
* param2 : u -> node that is connected to u
* Algorithm: The function traverse each vector and increment count to 1 if single edge found and then increment 2 if bi directional
* edge is found.
*/
template<typename T>
void Graph<T>::findEdge(int u, int v)
{
    int count = 0;
    for (int i = 0; i < adj[u].size(); i++) {
        if (adj[u][i] == v) {
            count++;
        }
    }

    for (int i = 0; i < adj[v].size(); i++) {
        if (adj[v][i] == u) {
            count++;
        }
    }

    if (count == 2) {
        cout << "A bi directional edge has been found between vertex " << u << " and" << v << endl;
    }
    else if (count == 1) {
        cout << "A uni directional edge has been found between vertex " << u << " and" << v << endl;
    }
    else {
        cout << "Edge not found between vertex " << u << " and" << v << endl;
    }
 
}

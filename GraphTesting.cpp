#include "Graph.cpp"
int main()
{
    int V = 20;
    Graph<int> G(V);
    G.addEdge(0, 1);
    G.addEdge(0, 4);
    G.addEdge(1, 2);
    G.addEdge(1, 3);
    G.addEdge(1, 4);
    G.addEdge(2, 3);
    G.addEdge(3, 4);
    G.addEdge(4, 4);
    G.addEdge(5, 2);
    G.addEdge(6, 2);
    G.addEdge(7, 10);
    G.addEdge(8, 1);
    G.addEdge(8, 2);
    G.addEdge(9, 1);
    G.addEdge(10, 1);
    G.addEdge(1, 10);
    G.addEdge(11, 12);
    G.addEdge(11, 5);
    G.addEdge(12, 11);
    G.addEdge(1, 10);
    G.addEdge(15, 19);

    G.printGraph();
    G.delEdge(1, 4);
    G.printGraph();
    G.delEdge(1, 4);
    G.delEdge(1, 3);
    G.findEdge(15, 19);
    G.printGraph();
   

    return 0;
}
#pragma once
#include <vector>
#include <iostream>
using namespace std;
/**
* This is a bidirectional as well as uni directional graph with the support of adjanceny list. I have used STL::vector library in c++
* for the complete implementation of the graph
*/
template <typename T>
class Graph {
private:
    vector<T> *adj;
    int vertices;
public:
    Graph(int V);
    void addEdge(int u, int v);
    void delEdge(int u, int v);
    void printGraph();
    void findEdge(int u, int v);
};






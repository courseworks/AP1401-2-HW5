# Advanced Programming - HW5
<p  align="center"> <b>Homework 5 - Spring 2023 Semester <br> Deadline: Wednesday khordad 3st - 11:59 pm</b> </p>

## Outline
A graph is a non-linear data structure. A graph can be defined as a collection of Nodes which are also called *vertices* and *edges* that connect two or more vertices.

In this homework we want to implement graph data structure. We use the adjacency list for the linked representation of the graph. The adjacency list representation maintains each node of the graph and a link to the nodes that are adjacent to this node. When we traverse all the adjacent nodes, we set the next pointer to null at the end of the list.
![](./resources/graph.png)

## Graph class
```cpp
template<typename T>
class Graph
{
public:
    // TODO: constructors and methods
private:
    class Node
    {
    public:
        T value{};
        Node* next{};
        //TODO: constructors and methods
    };
    Node* head{};
};
```
### Functions
- ` void addVertex(const T& v)`: get T and add to graph.
- `void addEdge(const T& v1, const T& v2, int a,  std::function<bool(T, T)> func)`: get two nodes and weight to add edge from v1 to v2. Use func to search in the graph and find(set default function to it).If edge exist, replace it with new weight.
- `const int getNumEdges() const`: The number of edges in the graph.
- `const vector<T>& getNeighbors(T vertex, std::function<bool(T, T)> func) const`: Get the list of neighbors of a vertex(set default function to it).
- `bool isConnected(T source, T destination, std::function<bool(T, T)> func) const`: Check if two vertices are connected(set default function to it).
- `vector<T> findShortestPath(T source, T destination, std::function<bool(T, T)> func)`: Find the shortest path between two vertices(set default function to it).
- `int getNumConnectedComponents() const`:Get the number of connected components in the graph.
- 

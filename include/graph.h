#include <vector>
#include <iostream>
#include <functional>
template<typename T>
class Graph
{
public:
    
private:
    class Node
    {
    public:
        T value;
        int weight{};
        Node* next{};
    };
    std::vector<Node*> head;
};

struct Node { //// for part 2
  int value;
  Node* left;
  Node* right;

  Node(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};


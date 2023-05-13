#include "gtest/gtest.h"
#include "../include/graph.h"


TEST(APHW5TEST, test1)
{
    Graph<int> g1;
    int a{4};
    int b{5};
    int c{6}, d{10};
    g1.addVertex(a);
    g1.addVertex(b);
    g1.addVertex(c);
    g1.addVertex(c);
    auto f{[](const int a, const int b){return a == b;}};
    g1.addEdge(a, b, 1, f);
    g1.addEdge(a, c, 5, f);
    g1.addEdge(b, c, 1, f);
    g1.addEdge(b, a, 5, f);
    g1.addEdge(c, d, 2, f);
    g1.disp();
    EXPECT_EQ(g1.getNumberEdges(), 4);
    EXPECT_EQ(g1.getNeighbors(a, f).size(), 2);
    EXPECT_EQ(g1.findShortestPath(a, b, f).size(), 2);
    EXPECT_EQ(g1.findShortestPath(a, d, f)[2], 6);
    EXPECT_EQ(g1.findShortestPath(a, d, f).size(), 4);
}


TEST(APHW5TEST, test2)
{

    Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 17);

    printInOrder(root);
    cout << endl;

    Node* node = find(root, 10);
    EXPECT_EQ(node->value, 10);

    node = find(root, 11);
    EXPECT_EQ(node, nullptr);

    deleteNode(root, 10);
    Node* node = find(root, 10);
    EXPECT_EQ(node->value, nullptr);

    printInOrder(root);
}
#include "SimpleNode.h"
#ifndef OOPproject_SIMPLEGRAPH_H
#define OOPproject_SIMPLEGRAPH_H
class SimpleGraph {
    int numNodes;
    int numEdges;
protected:
    SimpleNode *allNodes;
public:
    SimpleGraph();
    SimpleGraph(int n=5);
    int getNode()const;
    void addnode(int nodeid);
    void addEdge(int n1, int n2);
    void printData();
    void printneighbor(int id);
    ~SimpleGraph();
};
#endif //OOPproject_SIMPLEGRAPH_H
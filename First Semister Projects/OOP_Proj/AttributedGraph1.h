#include "SimpleGraph.h"
#include "AttributedNode1.h"
#ifndef ASSIGNMENT5_ATTRIBUTEDGRAPH1_H
#define ASSIGNMENT5_ATTRIBUTEDGRAPH1_H
class AttributedGraph1: public SimpleGraph{
    AttributedNode1* arr;
    static int checkn1;
public:
    AttributedGraph1(int n);
    int getc1()const;
    void appendAttribute();
    void printData();
    AttributedNode1* getarr();
    void printneighbor(int id);
    ~AttributedGraph1();
};

#endif //ASSIGNMENT5_ATTRIBUTEDGRAPH1_H

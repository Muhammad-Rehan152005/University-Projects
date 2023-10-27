#include "SimpleGraph.h"
#include "AttributedNode2.h"
#include <iomanip>
#ifndef OOPproject_ATTRIBUTEDGRAPH2_H
#define OOPproject_ATTRIBUTEDGRAPH2_H
class AttributedGraph2: public SimpleGraph{
    AttributedNode2* arr2;
    static int checkn2;
public:
    int getc2()const;
    AttributedGraph2(int);
    void appendAttribute();
    void printData();
    AttributedNode2* getarr();
    void printneighbor(int id);
    ~AttributedGraph2();
};
#endif 

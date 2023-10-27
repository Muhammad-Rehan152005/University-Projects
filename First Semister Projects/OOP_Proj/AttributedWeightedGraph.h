#ifndef ASSIGNMENT5_ATTRIBUTEDWEIGHTEDGRAPH_H
#define ASSIGNMENT5_ATTRIBUTEDWEIGHTEDGRAPH_H

#include "AttributedGraph1.h"
#include "AttributedGraph2.h"



class AttributedWeightedGraph:public AttributedGraph1, public AttributedGraph2
{
    int** array;
    int count;
public:
AttributedWeightedGraph(int);
void appendWeight(int,int, int);
void printData();
void addEdge(int, int);
void addNode(int);
void appendAttribute();
void printneighbor(int);
~AttributedWeightedGraph();
};
#endif
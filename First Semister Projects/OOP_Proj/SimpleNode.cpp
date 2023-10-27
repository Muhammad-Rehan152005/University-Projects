#include<iostream>
#include "SimpleNode.h"
#include "SimpleGraph.h"
using namespace std;
SimpleNode::SimpleNode(){
        NeighborCount = 0;
        nodeId = checkn;
        checkn++;
    }
SimpleNode::SimpleNode(int n)
    {
        NeighborCount = n;
        nodeId = checkn;

    }
    void SimpleNode::setid(int id)
    {
        nodeId = id;
    }
    int SimpleNode::getid()const
    {
        //return the nodeidhbors = new SimpleNode[n];
        checkn++;
        cout<<"Simple Node Constructor Called\n";
    }
    SimpleNode& SimpleNode::operator=(const SimpleNode& A){
        nodeId = A.nodeId;
        NeighborCount;
        return *this;
    }
    int SimpleNode::getneighborcount()
    {
        //return neighborCount
        return NeighborCount;
    }
    SimpleNode* SimpleNode::getneighbor()
    {
        //return the array of neighbor
        return arrNeighbors;
    }
    void SimpleNode::addEdge(const SimpleNode& n)
    {
        bool check = false;
        for(int i = 0; i<NeighborCount; i++){
            if(arrNeighbors[i].getid()==n.getid()){
                check = true;
                cout<<"Edge Exists Already\n";
                break;
            }
        }
        if(check==false) {
            SimpleNode *tmp = new SimpleNode[NeighborCount];
            for (int i = 0; i < NeighborCount; i++) {
                tmp[i] = arrNeighbors[i];
            }
            arrNeighbors = new SimpleNode[NeighborCount + 1];
            for (int i = 0; i < NeighborCount; i++) {
                arrNeighbors[i] = tmp[i];
            }
            arrNeighbors[NeighborCount].setid(n.getid());
            NeighborCount++;
        }
    }
SimpleNode::~SimpleNode() {}
int SimpleNode::checkn = 1;

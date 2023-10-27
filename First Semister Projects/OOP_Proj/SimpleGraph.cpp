#include <iostream>
#include "SimpleGraph.h"
using namespace std;
        SimpleGraph::SimpleGraph(){
            numNodes = 1;
            numEdges = 0;
            allNodes = new SimpleNode[1]{5};
        }
        SimpleGraph::SimpleGraph(int n)
        {
                numNodes = n;
                numEdges = 0;
                allNodes = new SimpleNode[n];
        }
        int SimpleGraph::getNode()const{
            return numNodes;
        }
        void SimpleGraph::addnode(int nodeid) {
            bool idcheck = true;
            for (int i = 0; i < numNodes; i++) {
                if(allNodes[i].getid()==nodeid){
                    idcheck = false;
                    cout << "NewNode Already exists with id " << nodeid << endl;
                    break;
                }
            }
            if(idcheck) {
                SimpleNode *tmp = new SimpleNode[numNodes];
                for (int i = 0; i < numNodes; i++) {
                    tmp[i] = allNodes[i];
                }
                numNodes++;
                allNodes = new SimpleNode[numNodes];
                bool idcheck = true;
                for (int i = 0; i < numNodes; i++) {
                    allNodes[i] = tmp[i];
                    if (allNodes[i].getid() == nodeid) {
                        idcheck = false;
                    }
                }
                allNodes[numNodes - 1].setid(nodeid);
                cout << "NewNode Added with ID : " << nodeid << endl;
            }
        }
        void SimpleGraph::addEdge(int n1, int n2)
        {
            bool func = false;
            int idx1 = -1, idx2 = -1;
            for(int i = 0; i<numNodes ; i++){
                if(idx1==-1 && allNodes[i].getid()==n1){
                    idx1=i;
                }
                if(idx2==-1 && allNodes[i].getid()==n2){
                    idx2=i;
                }
            }
            if(idx1 != -1 && idx2 != -1){
                func = true;
            }
            if(func){
                allNodes[idx1].addEdge(allNodes[idx2]);
                numEdges++;
            }else{
                cout<<"Edge Not Present!!!\n";
            }
        }
        void SimpleGraph::printData()
        { // print all node data
            for(int i = 0; i<numNodes; i++) {
                cout << "Node_ID : " << allNodes[i].getid()<<"\t , Edges : ";
                printneighbor(allNodes[i].getid());cout<<endl;
            }
        }
        void SimpleGraph::printneighbor(int id){
            int idx = -1;
            for(int i = 0; i<numNodes ; i++){
                if(id == allNodes[i].getid()){
                    idx = i;
                    break;
                }
            }
            SimpleNode* display = allNodes[idx].getneighbor();
            for(int i = 0;i<allNodes[idx].getneighborcount(); i++){
                if(i==allNodes[idx].getneighborcount()-1)
                    cout << display[i].getid();
                else
                    cout << display[i].getid() << ", ";
            }
            if(allNodes[idx].getneighborcount()==0){
                cout<<"No neighbour of following node";
            }
        }
SimpleGraph::~SimpleGraph() {
        }  
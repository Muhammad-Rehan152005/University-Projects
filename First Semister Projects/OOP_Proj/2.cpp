#include <iostream>
#include "SimpleNode.h"
#include "SimpleGraph.h"
#include "SimpleNode.cpp"
#include "SimpleGraph.cpp"
#include "AttributedNode1.h"
#include "AttributedGraph1.h"
#include "AttributedNode1.cpp"
#include "AttributedGraph1.cpp"
using namespace std;

int main(){
    cout<<"Important Info : \n1 ) You cannot add new Node with same ID of present Nodes\n2 ) A Node can have upto (Total Nodes - 1) neighbors/Edges\n";
    cout<<"3 ) You cannot add same edges again and again\n4 ) In order to check functionality of AttributedNode1Graph properly\n ~ first add some nodes, ~ add some edges between them, ~ appendAttributes and then ~ print graph data. Thank you\n";
    int nodes, id;
    cout << "==> Enter Number of Nodes you want : ";
    cin >> nodes;
    SimpleGraph* obj;
    AttributedGraph1 objd(nodes);
    obj = &objd;
    for(int i = 1; i<=nodes; i++){
        cout<<"Node created with ID : "<<i<<endl;
    }
    do {
        cout << "\n==> Press (1) : To addnode() in your object\n==> Press (2) : To AddEdge() in your object\n";
        cout << "==> Press (3) : To Append Attribtes (Gender, Age) in Your Nodes\n==> Press (4) : To Print Neighbor of Node\n";
        cout << "==> Press (5) : To Print data of AttributedGraph1\n==> Press (0) - To Exit\n";
        cin >> id;
        if (id == 1) {
            int objid;
            cout << "\nEnter Id of New Node : ";
            cin >> objid;
            obj->addnode(objid);
        } else if (id == 2) {
            int nid1, nid2;
            cout << "The edge is between Two Nodes\n";
            cout << "Enter ID of Node1 : ";
            cin >> nid1;
            cout << "Enter ID of Node2 : ";
            cin >> nid2;
            obj->addEdge(nid1, nid2);
            obj->addEdge(nid2, nid1);
        } else if (id == 4) {
            int nid;
            cout << "Enter id of Node to print it's Neighbours : ";
            cin >> nid;
            cout << "Neighbors of Node_" << nid << " : ";
            obj->printneighbor(nid);
            cout << endl;
        } else if (id == 5) {
            cout << "Graph_Data Prited : \n";
            objd.printData();
        }else if(id == 3){
            objd.appendAttribute();
        }
    } while (id != 0);

    cout<<"Terminated Successfully\n";
    cout<<"\nCheck SimpleGraph.cpp , SimpleNode.cpp , attributedNode1.cpp, attributedGraph1.cpp files for my implementation of Question # 0\n";

}

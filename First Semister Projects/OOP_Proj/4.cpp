#include <iostream>
#include "AttributedWeightedGraph.h"
#include "AttributedWeightedGraph.cpp"
#include "AttributedGraph2.h"
#include "AttributedNode2.h"
#include "AttributedGraph2.cpp"
#include "AttributedNode2.cpp"
#include "AttributedGraph1.h"
#include "AttributedNode1.h"
#include "AttributedGraph1.cpp"
#include "AttributedNode1.cpp"
#include "SimpleGraph.h"
#include "SimpleNode.h"
#include "SimpleGraph.h"
#include "SimpleNode.h"
using namespace std;
int main(){
    cout<<"Important Info : \n1 ) You cannot add new Node with same ID of present Nodes\n2 ) A Node can have upto (Total Nodes - 1) neighbors/Edges\n";
    cout<<"3 ) You cannot add same edges again and again\n4 ) In order to check functionality of AttributedNode2Graph properly\n ~ first add some nodes, ~ add some edges between them, ~ appendAttributes, ~ AddWeightages and then ~ print graph data. Thank you\n";
    int nodes, id;
    cout << "Enter Number of Nodes you want : ";
    cin >> nodes;
    AttributedWeightedGraph obj(nodes);
    for(int i = 1; i<=nodes; i++){
        cout<<"Node created with ID : "<<i<<endl;
    }
    do {
        cout << "\n==> Press (1) : To addnode() in your object\n==> Press (2) : To AddEdge() in your object\n";
        cout << "==> Press (3) : To addWeightage() in your object\n==> Press (4) : To AppendAttributed() in your object\n";
        cout << "==> Press (5) : To Print Neighbor of Node\n==> Press (6) : To Print data of Graph\n==> Press (0) - To Exit\n";
        cin >> id;
        if (id == 1) {
            int objid;
            cout << "\nEnter Id of New Node : ";
            cin >> objid;
            obj.addNode(objid);
        } else if (id == 2) {
            int nid1, nid2;
            cout << "The edge is between Two Nodes\n";
            cout << "Enter ID of Node1 : ";
            cin >> nid1;
            cout << "Enter ID of Node2 : ";
            cin >> nid2;
            obj.addEdge(nid1, nid2);
            obj.addEdge(nid2, nid1);
        } else if (id == 5) {
            int nid;
            cout << "Enter id of Node to print it's Neighbours : ";
            cin >> nid;
            cout << "Neighbors of Node_" << nid << " : ";
            obj.printneighbor(nid);
            cout << endl;
        } else if (id == 6) {
            cout << "Graph_Data Prited : \n";
            obj.printData();
        } else if (id == 3) {
            int nid1, nid2, weight;
            cout << "Enter ID of Node1 : ";
            cin >> nid1;
            cout << "Enter ID of Node2 : ";
            cin >> nid2;
            cout<<"Enter Weightage Between them : ";
            cin >> weight;
            obj.appendWeight(nid1, nid2, weight);
        }else if(id == 4) {
            obj.appendAttribute();
        }
    } while (id != 0);
cout<<"Terminated Successfully\n";
cout<<"\nCheck SimpleGraph.cpp , SimpleNode.cpp , attributedWeightedNode.cpp, attributedWeightedGraph.cpp files for my implementation of Question # 4\n";


return 0;
}
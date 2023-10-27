#include <iostream>
#include "SimpleGraph.h"
#include "SimpleGraph.cpp"
#include "SimpleNode.h"
#include "SimpleNode.cpp"
using namespace std;

int main(){
    int confirm;
    cout<<"Press (1) : If You Want To check Functionality of SimpleGraph Yourself\n";
    cout<<"Press (0) : To Check Main written for this class\n";
    cin>>confirm;
    if(confirm == 1) {
        cout<<"Important Info : \n1 ) You cannot add new Node with same ID of present Nodes\n2 ) A Node can have upto (Total Nodes - 1) neighbors/Edges\n";
        cout<<"3 ) You cannot add same edges again and again\n4 ) In order to check functionality of SimpleGraph properly\n ~ first add some nodes, ~ add some edges between them and then ~ print graph data. Thank you\n";
        int nodes, id;
        cout << "==> Enter Number of Nodes you want : ";
        cin >> nodes;
        SimpleGraph obj(nodes);
        for(int i = 1; i<=nodes; i++){
            cout<<"Node created with ID : "<<i<<endl;
        }
        do {
            cout << "\n==> Press (1) : To addnode() in your object\n==> Press (2) : To AddEdge() in your object\n";
            cout << "==> Press (3) : To Print Neighbor of Node\n==> Press (4) : To Print data of Graph\n==> Press (0) - To Exit\n";
            cin >> id;
            if (id == 1) {
                int objid;
                cout << "\nEnter Id of New Node : ";
                cin >> objid;
                obj.addnode(objid);
            } else if (id == 2) {
                int nid1, nid2;
                cout << "The edge is between Two Nodes\n";
                cout << "Enter ID of Node1 : ";
                cin >> nid1;
                cout << "Enter ID of Node2 : ";
                cin >> nid2;
                obj.addEdge(nid1, nid2);
                obj.addEdge(nid2, nid1);
            } else if (id == 3) {
                int nid;
                cout << "Enter id of Node to print it's Neighbours : ";
                cin >> nid;
                cout << "Neighbors of Node_" << nid << " : ";
                obj.printneighbor(nid);
                cout << endl;
            } else if (id == 4) {
                cout << "Graph_Data Prited : \n";
                obj.printData();
            }
        } while (id != 0);
    }else if(confirm == 0){
        cout<<"A Graph Object Created which has 4 Nodes\n";
        SimpleGraph obj1(4);
        obj1.addEdge(1,2);
        obj1.addEdge(2,1);
        obj1.addEdge(1,3);
        obj1.addEdge(3,1);
        obj1.addEdge(4,2);
        obj1.addEdge(2,4);
        obj1.addEdge(2,3);
        obj1.addEdge(3,2);
        cout<<"AddNode() function called to add a new_node with id 5\n";
        obj1.addnode(5);
        obj1.addEdge(5,4);
        obj1.addEdge(4,5);
        cout<<"AddNode() function called to add a new_node with id 6\n";
        obj1.addnode(6);
        obj1.addEdge(5,6);
        obj1.addEdge(6,5);
        obj1.addEdge(6,2);
        obj1.addEdge(2,6);
        cout<<"\n==> Graph Data Printed for the following Graph : \n";
        cout<<"\t\t 1 - 2 - 6\n";
        cout<<"\t\t  \\ / \\   \\ \n";
        cout<<"\t\t   3   4 - 5 \n\n";
        cout<<"Data : \n";
        obj1.printData();

        cout<<"\nTesting of printneighbor() function : \n";
        cout<<"\nNeighbors of Node 3 : ";obj1.printneighbor(3);cout<<endl;
        cout<<"Neighbors of Node 5 : ";obj1.printneighbor(5);cout<<endl;
        cout<<"\n ==> I tested functions -> addedge(), addnode(), printdata() and printneighbors()\n\n";
    }
    cout<<"Terminated Successfully\n";
    cout<<"\nCheck SimpleGraph.cpp , SimpleNode.cpp files for my implementation of Question # 1\n";
    return 0;
}

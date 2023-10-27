#include <iostream>
#include "AttributedGraph1.h"
using namespace std;

    AttributedGraph1::AttributedGraph1(int n):SimpleGraph(n){
        arr = new AttributedNode1[n];
        SimpleNode::checkn = 1;
        checkn1 = 0;
    }


    int AttributedGraph1::getc1() const{
    return checkn1;
}
    void AttributedGraph1::appendAttribute(){
        AttributedNode1* tmp= new AttributedNode1[checkn1];
        for(int j = 0;j<checkn1; j++){
            tmp[j].setgen(arr[j].getgen());
            tmp[j].setage(arr[j].getage());
        }
        arr = new AttributedNode1[getNode()];
        for(int j = 0;j<checkn1; j++){
            arr[j].setgen(tmp[j].getgen());
            arr[j].setage(tmp[j].getage());
        }
        delete []tmp;
        char a;
        int b;
        int i = checkn1;
        for(; i<getNode(); i++){
            cout<<"Node_ID : "<<allNodes[i].getid()<<endl;
            cout<<"Enter age : ";
            cin>>b;
            cout<<"Enter gender : ";
            cin>>a;
            arr[i].setage(b);
            arr[i].setgen(a);
        }
        checkn1=i;
    }
    void AttributedGraph1::printData(){
        for(int i = 0; i<checkn1; i++) {
            cout << "==> Node_ID : " << allNodes[i].getid()<<"\nAge : "<<arr[i].getage()<<"  , Gender : "<<arr[i].getgen();
            cout<<"\t , Edges : ";
            printneighbor(allNodes[i].getid());cout<<endl;
        }
    }
    void AttributedGraph1::printneighbor(int id){
        SimpleGraph::printneighbor(id);
    }
    AttributedNode1 * AttributedGraph1::getarr() {
    return arr;
    }
    AttributedGraph1::~AttributedGraph1(){}
    int AttributedGraph1::checkn1{0};
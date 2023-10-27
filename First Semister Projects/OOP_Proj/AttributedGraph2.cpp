#include <iostream>
#include "AttributedGraph2.h"
using namespace std;

    AttributedGraph2::AttributedGraph2(int n):SimpleGraph(n){
        arr2= new AttributedNode2[n];
        checkn2=0;
    }


    int AttributedGraph2::getc2() const {
        return checkn2;
    }
    void AttributedGraph2::appendAttribute(){
        AttributedNode2* tmp= new AttributedNode2[checkn2];
        for(int j = 0;j<checkn2; j++){
            tmp[j].setProfession(arr2[j].getProfession());
            tmp[j].setCity(arr2[j].getCity());
        }
        arr2 = new AttributedNode2[getNode()];
        for(int j = 0;j<checkn2; j++){
            arr2[j].setProfession(tmp[j].getProfession());
            arr2[j].setCity(tmp[j].getCity());
        }
        delete [] tmp;
        string a;
        int i = checkn2;
        for(; i<getNode(); i++) {
            cout << "Node_ID : " << allNodes[i].getid() << endl;
            cout << "Enter Profession : ";
            cin>>a;
            arr2[i].setProfession(a);
            cout << "Enter City Name : ";
            cin>>a;
            arr2[i].setCity(a);
        }
        checkn2=i;
    }
    void AttributedGraph2::printData(){
        for(int i = 0; i<checkn2; i++) {
            cout << "==> Node_ID : " << allNodes[i].getid();
            cout<<"\n Profession : "<<left<<setw(21)<<arr2[i].getProfession()<<" , City : "<<setw(12)<<arr2[i].getCity();
            cout<<" , Edges : ";
            printneighbor(allNodes[i].getid());cout<<endl;
        }
    }
    AttributedNode2 * AttributedGraph2::getarr() {
        return arr2;
    }
    void AttributedGraph2::printneighbor(int id){
        SimpleGraph::printneighbor(id);
    }
AttributedGraph2::~AttributedGraph2(){}
int AttributedGraph2::checkn2{0};
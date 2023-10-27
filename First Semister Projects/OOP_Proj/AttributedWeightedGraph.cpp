#include <iostream>
#include "AttributedWeightedGraph.h"
using namespace std;
AttributedWeightedGraph::AttributedWeightedGraph(int n):AttributedGraph1(n),AttributedGraph2(n){

    array = new int*[50];
    for(int i = 0; i<50; i++){
        array[i] = new int[50];
        array[i][0]= {0};
    }

}


void AttributedWeightedGraph::addEdge(int a, int b) {
    AttributedGraph1::addEdge(a,b);
    AttributedGraph2::addEdge(a,b);
}

void AttributedWeightedGraph::appendWeight(int n1,int n2, int weight)
{

    int idx1 = -1, idx2 = -1;
    for(int i = 0; i<AttributedGraph1::getNode(); i++){
        if(n1 == AttributedGraph1::allNodes[i].getid()){
            idx1 = i;
            break;
        }
    }
    if(idx1 != -1){
        for(int i = 0; i<AttributedGraph1::getNode(); i++){
            if(n2 == AttributedGraph1::allNodes[i].getid()){
                idx2 = i;
                break;
            }
        }
    }else{
        "Node are not Present in allNode Array\n";
    }
    if(idx1 != -1 && idx2 != -1){
        int a = 0;
        SimpleNode* N1 = AttributedGraph1::allNodes[idx1].getneighbor();
        SimpleNode* N2 = AttributedGraph1::allNodes[idx2].getneighbor();
        for(int i = 0; i<AttributedGraph1::allNodes[idx1].getneighborcount(); i++){
            if(n2==N1[i].getid()){
                cout << n2 << " ID Present in n1\n";
                a = -1;
                break;
            }
        }
        if(a==-1){
            for (int i = 0; i < AttributedGraph1::allNodes[idx2].getneighborcount(); i++) {
                if (n1 == N2[i].getid()) {
                    cout << n1 << " ID Present in n2\n";
                    a = -2;
                    break;
                }
            }
            if(a==-2) {
                array[idx1][count] = weight;
                array[idx2][count] = weight;
                cout<<"Weightage Added\n";
                count++;
            }
        }
    }else{
        "Node are not Neighbors\n";
    }

}
void AttributedWeightedGraph::addNode(int id) {
    AttributedGraph1::addnode(id);
    AttributedGraph2::addnode(id);
}
void AttributedWeightedGraph::appendAttribute() {
    AttributedGraph1::appendAttribute();
    AttributedGraph2::appendAttribute();
}
void AttributedWeightedGraph::printData()
{
    AttributedNode1* N1 = AttributedGraph1::getarr();
    AttributedNode2* N2 = AttributedGraph2::getarr();
    for(int i = 0; i<AttributedGraph1::getNode(); i++){
        cout<<"==> Node_ID : "<<AttributedGraph1::allNodes[i].getid()<<endl;
        cout<<"-> Edges : ";printneighbor(AttributedGraph1::allNodes[i].getid());
        if(i<AttributedGraph1::getc1()){
            cout<<"\n-> Age : "<<N1[i].getage()<<"\n-> Gender : "<<N1[i].getgen()<<endl;
        }
        if(i<AttributedGraph2::getc2()){
            cout<<"-> Profession : "<<N2[i].getProfession()<<"\n-> City : "<<N2[i].getCity()<<endl;
        }
        cout<<endl;
    }
    for(int i = 0; i<AttributedGraph1::getNode(); i++){
        for(int j = 0; j<AttributedGraph1::allNodes[i].getneighborcount(); j++){
            int A = 0;
            int B = 0;
            for(int k = 0; k<AttributedGraph1::getNode() ; k++){
                for(int l = 0; l<AttributedGraph1::allNodes[i].getneighborcount(); l++) {
                    if (k != i) {
                        if (array[i][j] == array[k][l] != 0) {
                            A = k + 1;
                            B = array[i][j];
                        }
                    }
                }
            }
            if(B!=0) {
                cout << "Weights of Node Between Edges : " << i + 1 << " and " << A;
                cout << " : " << array[i][j] << endl;
            }
        }
    }
}
void AttributedWeightedGraph::printneighbor(int id)
{

    AttributedGraph1::printneighbor(id);
}
AttributedWeightedGraph::~AttributedWeightedGraph(){}
#include "AttributedNode1.h"

    AttributedNode1::AttributedNode1(){
        gen = '\0';
        age = 0;
    }
    void AttributedNode1::setgen(char a){
        gen  = a;
    }
    void AttributedNode1::setage(int a){
        age = a;
    }
    char AttributedNode1::getgen()const{
        return gen;
    }
    int AttributedNode1::getage()const{
        return age;
    }
    AttributedNode1::~AttributedNode1(){}

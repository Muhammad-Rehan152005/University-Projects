#include<iostream>
#include "AttributedNode2.h"
using namespace std;
AttributedNode2::AttributedNode2(){
        Profession = "";
        CityName = "";
    }
    void AttributedNode2::setProfession(string a){
        Profession = a;
    }
    void AttributedNode2::setCity(string a){
        CityName = a;
    }
    string AttributedNode2::getProfession()const{
        return Profession;
    }
    string AttributedNode2::getCity()const{
        return CityName;
    }
    AttributedNode2::~AttributedNode2(){}

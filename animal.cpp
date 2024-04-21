#include "animal.h"
#include<iostream>
using namespace std;
using namespace ad;
Animal::Animal(){
    cout<<"Animal constructor is called"<<endl;
}

void Animal::setType(string type){
    this->type=type;
}
void Animal::setlegs(int legs){
    this->legs=legs;
}
void Animal::showData(){
    cout<<type<<":"<<endl;
    cout<<legs<<":"<<endl;
}
Animal::~Animal(){cout<<"Destructor is called"<<endl;}

int main(){

Animal a1;

a1.setlegs(4);
a1.setType("dog");
a1.showData();


}
#include "animal.h"
#include<iostream>
using namespace std;
using namespace cd;


Calculator::Calculator(int fN,int sN,int op):firstNum(fN),secondNum(sN),oper(op){
cout<<"constructor is called"<<endl;
};

Calculator::~Calculator(){
    cout<<"Destructor is called"<<endl;
}


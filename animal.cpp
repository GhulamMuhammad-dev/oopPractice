#include "animal.h"
#include<iostream>
using namespace std;
using namespace cd;


Calculator::Calculator(int fN,int sN,int op):firstNum(fN),secondNum(sN),oper(op){
cout<<"constructor is called"<<endl;
};

double Calculator::calculate(){
    double result;
    switch (oper)
    {
    case '+':
        result=firstNum+secondNum;
        break;
    case '-':
        result=firstNum-secondNum;
        break;
    case '*':
        result=firstNum*secondNum;
        break;
    case '/':
        result=firstNum/secondNum;
        break;
    
    default:
    cout<<"wrong operator is used"<<endl;
        break;
    }

    return result;
}

Calculator::~Calculator(){
    cout<<"Destructor is called"<<endl;
}


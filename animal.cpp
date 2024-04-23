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

int main(){
   int fN,sN;
   char op;

   cout<<"Enter first number"<<endl;
   cin>>fN;
   cout<<"Enter second number"<<endl;
   cin>>sN;
   cout<<"Enter operator"<<endl;
   cin>>op;
   
   Calculator c1(fN,sN,op);

   cout<<"The result of calculation is "<<c1.calculate()<<endl;








    return 0;
}
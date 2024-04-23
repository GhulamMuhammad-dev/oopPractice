#pragma once
#include<string>
#include<iostream>
using namespace std;

namespace cd{
   
   class Calculator{
     private:
      int firstNum;
      int secondNum;
      char oper;
    public:
    Calculator(int fN,int sN,int op);

    double calculate();
   
    ~Calculator();


   };

   




}
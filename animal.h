#pragma once
#include<string>
#include<iostream>
using namespace std;

namespace ad{
   
   class Animal{
     private:
      string type;
      int legs;
    public:
    Animal();
    void setType(string type);
    void setlegs(int legs);
    void showData();
    ~Animal();


   };






}
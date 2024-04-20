#include<iostream>
#include<string>
using namespace std;

class ShopItem{
    public:
     virtual int price()=0;

};

class Floar:public ShopItem{
    public:
    int price() override{
      return 2000;
    }
};
class Rice:public ShopItem{
    public:
    int price() override{
      return 7000;
    }
};
class Oil:public ShopItem{
    public:
    int price() override{
      return 10000;
    }
};







int main(){











    return 0;
}
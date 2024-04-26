// #include<iostream>
// #include<string>
// using namespace std;

// class ShopItem{
//     public:
//      virtual int price()=0;

// };

// class Floar:public ShopItem{
//     public:
//     int price() override{
//       return 2000;
//     }
// };
// class Rice:public ShopItem{
//     public:
//     int price() override{
//       return 7000;
//     }
// };
// class Oil:public ShopItem{
//     public:
//     int price() override{
//       return 10000;
//     }
// };




//  void checkPrice(ShopItem& item){
//     cout<<item.price()<<endl;
//  }


// int main(){

// Rice rice;
// Oil oil;
// checkPrice(rice);
// checkPrice(oil);








//     return 0;
// }



#include<iostream>
#include<string>

using namespace std;


template<class T>

class MyType{
    public:
    T value;
    MyType(T val){
      this->value=val;

    }
    void addValues(MyType m2 ){
      cout<<this->value+m2.value<<endl;

    }





};



int main(){

 MyType <int>m1(20);
 MyType <int>m2(10);
 m2.addValues(m1);



  return 0;
}

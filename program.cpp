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


template<class T1,class T2>

class ShowData{

  private:
  T1 data1;
  T2 data2;
  public:
  ShowData(T1 a,T2 b){
    data1=a;
    data2=b;
  }

  void show();







};


int main(){

 



  return 0;
}

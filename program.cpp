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



// #include<iostream>
// #include<string>

// using namespace std;


// template<class T1,class T2>

// class ShowData{

//   private:
//   T1 data1;
//   T2 data2;
//   public:
//   ShowData(T1 a,T2 b){
//     data1=a;
//     data2=b;
//   }

//   void show();



// };

// template<class T1,class T2>
// void ShowData<T1,T2>::show(){
// cout<<data1<<" "<<data2<<endl;
// }


// int main(){

//  ShowData <string,int> d1("helloo",223);
//  d1.show();



//   return 0;
// }


// #include<iostream>
// #include<string>

// using namespace std;


// class Employee{
//     private:
//      int id;
//     string name;
//     int salary;
//     public:
//     Employee(string name,int salary){
//          id=current_id++;
//          this->name=name;
//     }
//    int getId() const{
//     return id;
//    }

//    string getName(){
//     return name;
//    }
//    static int current_id;
    
// };

// int Employee::current_id=0;

// ostream& operator<<(ostream&COUT,Employee employee){
//   COUT<<"The id of employee: "<<employee.getName()<<" is "<<employee.getId();
//   return COUT;
// }

// int main(){


// Employee e1("ahmad",2000),e2("danyal",3000),e3("bilal",4000);

// cout<<e3<<endl<<e2;





//   return 0;
// }


#include<iostream>
#include<string>
using namespace std;

class Complex{
   private:
   int real;
   int imaginary;

   public:
   Complex(){};
   Complex(int r,int i):real(r),imaginary(i){};

  Complex operator+(Complex obj){
     Complex temp;
     temp.real=real+obj.real;
     temp.imaginary=imaginary+obj.imaginary;
     return temp;
  }
  

  void output(){
    cout<<real<<":"<<imaginary<<"i"<<endl;
  }



};









int main(){


Complex c1(12,3),c2(2,5),res;
res=c1+c2;
res.output();








  return 0;
}
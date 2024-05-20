// #include<iostream>
// using namespace std;

// class Binary{
//       private:
//        float value;
//      public:
//      Binary(){};
//        Binary(float v){
//         value=v;
//        }
      
//       void getValue(){
//         cout<<"The value is:"<<this->value<<endl;
//       }
       
//     Binary operator+(const Binary &other)const{
//         Binary temp;
//         temp.value=this->value+other.value;
//         return temp;
//     }
//     Binary operator-(const Binary &other)const{
//         Binary temp;
//         temp.value=this->value-other.value;
//         return temp;
//     }
//     Binary operator/(const Binary &other)const{
//         Binary temp;
//         temp.value=this->value/other.value;
//         return temp;
//     }
//     Binary operator*(const Binary &other)const{
//         Binary temp;
//         temp.value=this->value*other.value;
//         return temp;
//     }
     


// };


// int main(){

// Binary b1(4.8),b2(8.5),res;
// res=b1-b2;
// res.getValue();


//     return 0;
// }

#include<iostream>
using namespace std;


class Complex{
     private:
     int real;
     int img;
     public:
     Complex(){};
     Complex(int real,int img){
       this->real=real;
       this->img=img;
     }
     void showValues(){
        cout<<"( "<<real<<","<<img<<" )"<<"\n";
        
            }

       Complex operator+(const Complex &other)const{
       Complex temp;
       temp.real=this->real+other.real;
       temp.img=img+other.img;
       return temp;
    }




};







int main(){


Complex c1(4,5),c2(5,5),res;
res=c1+c2;
res.showValues();

    return 0;
}
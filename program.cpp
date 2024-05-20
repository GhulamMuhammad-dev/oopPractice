#include<iostream>
using namespace std;

class Binary{
      private:
       float value;
     public:
     Binary(){};
       Binary(float v){
        value=v;
       }
      
      void getValue(){
        cout<<"The value is:"<<this->value<<endl;
      }
       
    Binary operator+(const Binary &other)const{
        Binary temp;
        temp.value=this->value+other.value;
        return temp;
    }
    Binary operator-(const Binary &other)const{
        Binary temp;
        temp.value=this->value-other.value;
        return temp;
    }
    Binary operator/(const Binary &other)const{
        Binary temp;
        temp.value=this->value/other.value;
        return temp;
    }
    Binary operator*(const Binary &other)const{
        Binary temp;
        temp.value=this->value*other.value;
        return temp;
    }
     


};







int main(){

Binary b1(4.8),b2(8.5),res;
res=b1-b2;
res.getValue();






    return 0;
}
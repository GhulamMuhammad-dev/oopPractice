
#include<iostream>
#include<string>

using namespace std;

template <typename T1>
class Base
{
  protected:
  T1 value;

};
  
template <typename T1>
 class Drived:Base<T1>{
    public:
    void setValue(T1 val){
        this->value=val;
    }
    void showValue(){
        cout<<this->value<<endl;
    }
 };


 int main(){

  Drived <string>d1;
  d1.setValue("hello");
  d1.showValue();
   


    return 0;
 }
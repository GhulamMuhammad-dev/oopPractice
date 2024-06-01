#include<iostream>
#include<string> 
using namespace std;

class Animal{
        private:
        string name;
        int health;
        public:

        void setdata(string na,int h){
              name=na;
              health=h;
        }
     
       void getData() const{
        cout<<name<<" "<<health<<endl;
       }




};





int main(){

 Animal dog;

dog.setdata("dog",100);
dog.getData();
   




  return 0;
}
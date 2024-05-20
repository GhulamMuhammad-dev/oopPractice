#include<iostream>
using namespace std;

class String{
      private:
       char* string;
     public:
         String(const String& other){
             string=new char[strlen(other.string)+1];
             strcpy(string,other.string);
             
         }

       String operator+(const String& other) const {
          
        strcat(string,other.string);
        return *this;
    }


};







int main(){








    return 0;
}
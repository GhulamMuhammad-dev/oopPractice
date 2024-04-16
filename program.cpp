#include<iostream>
#include<string>
using namespace std;


class GameArea{
     private:
     char *gameGrid[];
     public:
     GameArea(){};

     void setGameGrid(){
     int size;
     cout<<"Enter the size of grid"<<endl;
     cin>>size;
      char *gameGrid=new char[size];
     }


     protected:

};











int main(){






   return 0;
}
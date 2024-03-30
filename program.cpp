#include<iostream>
#include<string>
using namespace std;

class GameArea{
     private:
     char Area[10][10];
     public:
       GameArea(){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                Area[i][j]=' ';
            }
        }


        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
               cout<<Area[i][j]<<" ";
            }
            cout<<endl;
        }
       }

     protected:








};









int main(){
     GameArea g1;




    return 0;
}
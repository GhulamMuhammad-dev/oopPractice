#include<iostream>
#include<string>
#include<ctime>
#include<windows.h>
#include<cstdlib>
using namespace std;

void clearScreen(){
    system("cls");
}

class GameArea{
     protected:
     char Area[10][10];
     public:
       GameArea(){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                Area[i][j]='_';
            }
        }


        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
               cout<<Area[i][j]<<" ";
            }
            cout<<endl;
        }
       }


};

class Star: public GameArea{

      protected:
     const char star='*';

     public:
     
     void goRandom(){

            do{

    srand(static_cast<unsigned>( time(0)));
    int randomNum=rand()%7;
     char option;
     cout<<"Enter a to generate random number"<<endl;
     cin>>option;

     if(option=='a'){
         clearScreen();
        cout<<randomNum<<endl;
        GameArea g1;
     }
     else{
        break;
     }



    }while(true);

     }






};





int main(){
    Star s1;
    s1.goRandom();
   





    return 0;
}
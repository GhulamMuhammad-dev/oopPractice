#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class GameArea{
     protected:
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


};

class Star: public GameArea{

      protected:
     const char star='*';
     friend int RandomNumber();

     public:

     void goRandom(){
            do{
     char option;
     cout<<"Enter a to generate random number"<<endl;
     cin>>option;
     if(option=='a'){
        cout<<RandomNumber()<<endl;
     }
     else{
        break;
     }



    }while(true);

     }






};



int RandomNumber(){
    srand(static_cast<unsigned>( time(0)));
    int randomNum=rand()%7;

    return randomNum;

}





int main(){
    //  GameArea g1;
    Star s1;
    s1.goRandom();
   





    return 0;
}
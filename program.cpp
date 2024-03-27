// #include<iostream>
// #include<string>
// #include<conio.h>
// using namespace std;

// class Car{

//   private:
//   int gear;
//   int speed;
//   bool carStart;
//   bool breakApply;
//   int currentPosition=0;
//   char moveForward;

//   public:

//   Car(){};
//   Car(int gear,int speed,bool carStart,bool breakApply){

//     this->gear=gear;
//     this->speed=speed;
//     this->carStart=carStart;
//     this->breakApply=breakApply;
//   }

//   void startCar(bool carStart){
//      this->carStart=carStart;
//   }

//   void setGear(int gear){
//     if(gear>0 && gear<5){
//      this->gear=gear;
//     }
//     else{
//         cout<<"wrong gear selected"<<endl;
//     }
//   }



//   void driveCar(){

//     if(carStart){
      
//       if(gear==1){
//         this->speed=5;
//       }
//       else if(gear==2){
//         this->speed=10;
//       }
//      else if(gear==3){
//         this->speed=15;
//       }
//      else if(gear==4){
//         this->speed=20;
//       }

//     }

//     else{
//         cout<<"Please start the car first"<<endl;
//     }

//   }


//   void moveCar(){

//       if(carStart && gear){

//        do{
//         moveForward=_getch();

//         if(moveForward=='w'){
//           currentPosition+=speed;
//           cout<<currentPosition<<endl;
//         }
//         else if(moveForward=='s'){
//           break;
//         }



//        }while(true);

//       }




//   }








// };


// int main(){

// Car c1;
// c1.startCar(true);
// c1.setGear(2);
// c1.driveCar();
// c1.moveCar();








//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;
int main(){

string names[5]={"ahmad","ali","danyal","suama","bilal"};
for(int i=0;i<5;i++){
  cout<<(names+i)<<endl;
}







  return 0;
}
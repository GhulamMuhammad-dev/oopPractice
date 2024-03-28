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


// #include<iostream>
// #include<string>
// using namespace std;

//  class Circle{
//     private:
//     double pi=3.141569;
//     double radius;
//     public:
//     void setRadius(double radius){
//       this->radius=radius;
//     }
//     void circleArea(){
//       cout<<"The radius is "<<pi*(radius*radius)<<endl;
//     }
//  };







// int main(){


//  Circle *c2;
 
//  c2=new Circle;

//  c2->setRadius(5);
//  c2->circleArea();




//   return 0;
// }

#include<iostream>
#include<string>
using namespace std;

 class Libarary{
  private:
  string name;
  string address;
  public:
  Libarary(){};
  Libarary(string na,string add){
    name=na;
    address=add;
  }
   
   void showInfo(){
    cout<<"The name of libraray is "<<name<<" The address is "<<address<<endl;
   }


 };











int main(){
  return 0;
}
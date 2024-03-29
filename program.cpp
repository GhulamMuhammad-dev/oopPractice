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

// #include<iostream>
// #include<string>
// using namespace std;


//  class Books{
//       private:
//       string title;
//       string author;
//       int publishYear;
//       public:
//       Books(){};
//       Books(string title,string author,int pusblishYear){
//         this->title=title;
//         this->publishYear=pusblishYear;
//         this->author=author;
//       }

//       void setBookInfo(string title,string author,int pusblishYear){
//         this->title=title;
//         this->publishYear=pusblishYear;
//         this->author=author;
//       }

//       void bookInfo(){
//         cout<<"title:"<<title<<endl;
//         cout<<"author:"<<author<<endl;
//         cout<<"publishYear:"<<publishYear<<endl;
//       }

//  };

// class Transaction:public Books{
   
//    protected:
//    void borrowBook(){
//     cout<<"You borrow the book "<<endl;
//      bookInfo();
//    }
//    void returnBook(){
//     cout<<"You return the book "<<endl;
//      bookInfo();
//    }
//    void giveBook(){
//     cout<<"You give the book "<<endl;
//      bookInfo();
//    }
//    void takeBook(){
//     cout<<"You take the book "<<endl;
//      bookInfo();
//    }
   
// };


// class Member:public Transaction{
//         private:
//         string name;
//         string address;
//         string status;
//         public:
        
//         Member(){};
//           Member(string name,string address,string status){
//           this->name=name;
//           this->address=address;
//           this->status=status;
//       };

//           void setMemberInfo(string name,string address,string status){
//           this->name=name;
//           this->address=address;
//           this->status=status;
//       };

//       string checkStatus(){
//         return status=="student"?"std":"work";
//       }

//       void statusStudent(){
//         char option;
//         cout<<"You want to borrow the book or return the book b/r"<<endl;
//         cin>>option;
//         if(option=='b'){
//           borrowBook();
//         }
//         else if(option=='r'){
//           returnBook();
//         }
//       }

//  void statusWorker(){
//         char option;
//         cout<<"You want to give the book or take the book g/t"<<endl;
//         cin>>option;
//         if(option=='g'){
//           giveBook();
//         }
//         else if(option=='t'){
//          takeBook();
//         }
//       }





// };



//  class Libarary:public Member{
//   private:
//   string name;
//   string address;
//   public:
//   Libarary(){};
//   Libarary(string na,string add){
//     name=na;
//     address=add;
//   }
   
//    void showInfo(){
//     cout<<"The name of libraray is "<<name<<" The address is "<<address<<endl;
//    }


//  };






// int main(){

//  Libarary l1;
 
// l1.setMemberInfo("ahmad","Islamabad","student");
// l1.setBookInfo("the hunt","ali",2017);
// cout<<l1.checkStatus();

// l1.statusStudent();














//   return 0;
// }


#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;
public:
    // Default constructor
    Book() {}

    // Parameterized constructor
    Book(const string& t, const string& a, int year) : title(t), author(a), publicationYear(year) {}

    // Method to input book information
    void input() {
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter publication year: ";
        cin >> publicationYear;
        
        // Consume the newline character left in the input buffer
        cin.ignore();
    }

    // Method to display book information
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int main() {
    const int numBooks = 3; // Number of books
    Book books[numBooks];   // Array of Book objects

    // Input book information
    for (int i = 0; i < numBooks; ++i) {
        cout << "Enter information for Book " << i + 1 << ":" << endl;
        books[i].input();
    }

    // Display book information
    cout << "\nBook Information:\n";
    for (int i = 0; i < numBooks; ++i) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].display();
    }

    return 0;
}

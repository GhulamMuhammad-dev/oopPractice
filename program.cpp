// #include<iostream>
// #include<stdlib.h>
// #include<iomanip>
// #include<conio.h>
// #include<string>

// using namespace std;

// class Employee{
//     private:
//     mutable string name;
//     mutable int salary;
//     mutable string status;
//     mutable bool active;




//     public:
//     Employee(){};


//      void setEmployInfo (string name,int salary,string status,bool active) const{
//         this->name=name;
//         this->salary=salary;
//         this->status=status;
//         this->active=active;
//     }

//     void showEmploysInfo() const{
     
//      cout<<"Name: "<<name<<endl;
//      cout<<"salary: "<<salary<<endl;
//      cout<<"status: "<<status<<endl;
//      cout<<"active: "<<active<<endl;



//     }
    




// };











 
// int main() 
// { 

//     time_t start, end; 
//     time(&start); 
 
//     ios_base::sync_with_stdio(false); 
 
//      int totalEmployee;
//      cout<<"Enter the number of employees"<<endl;
//     cin>>totalEmployee;

//     const Employee *employees=new Employee[totalEmployee];
//    string empName;
//    int empSalary;
//    string empStatus;
//    bool empisActive;

//    for(int i=0;i<totalEmployee;i++){
//     cout<<"Enter the name of employee "<<i+1<<endl;
//     cin>>empName;
//     cout<<"Enter the salary of employee "<<i+1<<endl;
//     cin>>empSalary;
//     cout<<"Enter the status of employee "<<i+1<<endl;
//     cin>>empStatus;
//     cout<<" Is Active Employee "<<i+1<<endl;
//      cin>>empisActive;
//     employees[i].setEmployInfo(empName,empSalary,empStatus,empisActive);
//    }

//    for(int i=0;i<totalEmployee;i++){
//     employees[i].showEmploysInfo();
//    }



















//     time(&end); 
 


































//     // Calculating total time taken by the program. 
//     double time_taken = double(end - start); 
//     cout << "Time taken by program is : " << fixed 
//         << time_taken << setprecision(5); 
//     cout << " sec " << endl; 
//     return 0; 
// } 







// #include <iostream>
// #include<string>
// using namespace std;


// class Libarary {
// private:
//     mutable int bookID;
//     string name;
//     string author;
//     bool borrowStatus;
// public:
//     Libarary() {};
//     Libarary(int id,string name,string author,bool borrowStatus){
//         this->bookID = id;
//         this->name = name;
//         this->author = author;
//         this->borrowStatus = borrowStatus;
//     };

//     void setData(int id, string name, string author, bool borrowStatus) {
//         this->bookID = id;
//         this->name = name;
//         this->author = author;
//         this->borrowStatus = borrowStatus;
//     };

//     void allocateBook(bool borrowStatus) {
//         this->borrowStatus = borrowStatus;

//     }

//     void displayBooks() {
//         cout << "id: " << bookID << endl;
//         cout << "name: " << name << endl;
//         cout << "author: " << author << endl;
//         if (borrowStatus) {
//             cout << "book is available........" << endl;
//        }
//         else {
//             cout << "Book is not available......." << endl;
//         }
//     }


//     void acceptBook() {
//         if (this->borrowStatus == 1) {
//             cout << "This book is available" << endl;
//         }
//         else {
//             cout << "This book is not available" << endl;
//         }
        

//     }








// };

// int main()
// {


//     int totalBooks;
//     cout<<"Enter the number of books you want to enter"<<endl;
//     cin>>totalBooks;
//      Libarary *books=new Libarary[totalBooks];
//     int id;
//     string name;
//     string author;
//     bool borrowStatus;

//     for (int i = 0; i < totalBooks; i++) {
//         cout << "Enter the id:" << endl;
//         cin >> id;
//         cout << "Enter the name:" << endl;
//         cin >> name;
//         cout << "Enter the author:" << endl;
//         cin >> author;
//         cout << "Enter the borrowStatus:" << endl;
//         cin >> borrowStatus;
//         books[i].setData(id, name, author, borrowStatus);
//     }

   

//         for (int i = 0; i < totalBooks; i++) {
//             books[i].displayBooks();
//         }
// do{
//         char option;
//         cout << "You want to borrow book or retuen the book b/r" << endl;
//         cin >> option;
        
//         if (option == 'b') {
//             int bookId;
//             cout << "Enter the id of book" << endl;
//             cin >> bookId;
//             books[bookId-1].displayBooks();
//             books[bookId-1].acceptBook();
//             cout << "You borrow it" << endl;
//             books[bookId-1].allocateBook(0);


//             for (int i = 0; i < totalBooks; i++) {
//                 books[i].displayBooks();
//             }


//         }
//         else if (option == 'r') {
//             int bookId;
//             cout << "Enter the id of book" << endl;
//             cin >> bookId;
//             books[bookId-1].displayBooks();
//             books[bookId-1].acceptBook();
//             cout << "You return it" << endl;
//             books[bookId-1].allocateBook(1);

//             for (int i = 0; i < totalBooks; i++) {
//                 books[i].displayBooks();
//             }
//         }

//         else{
//             break;
//         }

//         }while(true);
        


//         return 0;


    
// }




// #include <iostream>

// // Base class Player
// class Player {
// protected:
//     int posX;
//     int posY;

// public:
//     Player(int x = 0, int y = 0) : posX(x), posY(y) {}

//     void move(int x, int y) {
//         posX += x;
//         posY += y;
//         std::cout << "Player moved to position (" << posX << ", " << posY << ")\n";
//     }
// };

// // Subclass Runner inheriting from Player
// class Runner : public Player {
// public:
//     Runner(int x = 0, int y = 0) : Player(x, y) {}

//     void run(int distance) {
//         move(distance, 0); // Calls base class move function
//         std::cout << "Runner ran " << distance << " units\n";
//     }
// };

// // Subclass Jumper inheriting from Player
// class Jumper : public Player {
// public:
//     Jumper(int x = 0, int y = 0) : Player(x, y) {}

//     void jump(int height) {
//         move(0, height); // Calls base class move function
//         std::cout << "Jumper jumped " << height << " units\n";
//     }
// };

// int main() {
    
//     Runner runner;
//     Jumper jumper;

//     runner.run(5);
//     jumper.jump(3);

//     return 0;
// }


// #include <iostream>
// #include <conio.h> // for _getch()
// #include <windows.h> // for Sleep()
// #include<ctime>
// using namespace std;

// const int width = 10;
// const int height = 10;

// class Snake {
// private:
//     int x, y;
// public:
//     Snake() {
//         x = width / 2;
//         y = height / 2;
//     }
//     int getX() { return x; }
//     int getY() { return y; }
//     void move(int dx, int dy) {
//         x += dx;
//         y += dy;
//     }
//     void draw() {
//         cout << "O";
//     }
// };

// class Food {
// private:
//     int x, y;
// public:
//     Food() {
//         srand(time(0));
//         x = rand() % width;
//         y = rand() % height;
//     }
//     int getX() { return x; }
//     int getY() { return y; }
//     void respawn() {
//         x = rand() % width;
//         y = rand() % height;
//     }
//     void draw() {
//         cout << "*";
//     }
// };

// class Game {
// private:
//     bool gameOver;
//     Snake snake;
//     Food food;
// public:
//     Game() {
//         gameOver = false;
//     }
//     void setup() {
//         system("cls");
//         cout << "Welcome to Snake Game!" << endl;
//         cout << "Press any key to start..." << endl;
//         _getch();
//     }
//     void input() {
//         if (_kbhit()) {
//             switch (_getch()) {
//                 case 'w':
//                     snake.move(0, -1);
//                     break;
//                 case 'a':
//                     snake.move(-1, 0);
//                     break;
//                 case 's':
//                     snake.move(0, 1);
//                     break;
//                 case 'd':
//                     snake.move(1, 0);
//                     break;
//                 case 'x':
//                     gameOver = true;
//                     break;
//             }
//         }
//     }
//     void draw() {
//         system("cls");
//         for (int i = 0; i < width + 2; i++)
//             cout << "-";
//         cout << endl;

//         for (int i = 0; i < height; i++) {
//             for (int j = 0; j < width; j++) {
//                 if (j == 0)
//                     cout << "|";
//                 if (i == snake.getY() && j == snake.getX())
//                     snake.draw();
//                 else if (i == food.getY() && j == food.getX())
//                     food.draw();
//                 else
//                     cout << " ";
//                 if (j == width - 1)
//                     cout << "|";
//             }
//             cout << endl;
//         }

//         for (int i = 0; i < width + 2; i++)
//             cout << "-";
//         cout << endl;
//     }
//     void logic() {
//         if (snake.getX() == food.getX() && snake.getY() == food.getY()) {
//             food.respawn();
//         }
//     }
//     bool isGameOver() {
//         return gameOver;
//     }
// };

// int main() {
//     Game game;
//     game.setup();
//     while (!game.isGameOver()) {
//         game.input();
//         game.draw();
//         game.logic();
//         Sleep(100); 
//     }
//     cout << "Game Over!" << endl;
//     return 0;
// }



#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Car{
   private:
   double *speed;
   double *distance;
   double *maxSpeed;

   protected:



   public:
   Car(){
      this->speed=new double(0);
   };
   

   void giveMaxSpeed(){
    double speed;
    cout<<"Enter the car MaxSpeed"<<endl;
    cin>>speed;
   this->maxSpeed=new double(speed);
   }

   double showSpeed(){
      return *speed;
   }

   void giveDistance(){
    double distance;
    cout<<"Enter the distance covered"<<endl;
    cin>>distance;
   this->distance=new double(distance);
   }

  
   double getTimeTaken(){
    
   double time=*distance / *speed;
   return time;

   }

  void moveCar(){
   if(*speed<=*maxSpeed){
    *speed+=4;
   }
   else{
      cout<<"Speed limit reached"<<endl;
   }



  }

  void breakCar(){
    if(*speed>=0){
    *speed-=4;
    }
    else{
      *speed=0;
    }



  }







};





int main(){

Car c1;
c1.giveMaxSpeed();
char option;
do{
   option=getch();
   if(option=='s'){
   c1.moveCar();
   cout<<c1.showSpeed()<<endl;
   }
   else if(option=='b'){
      c1.breakCar();
      cout<<c1.showSpeed()<<endl;
   }




}while(option=='s' || option=='b');










     return 0;
}
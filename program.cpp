#include<iostream>
#include<string>
#include<ctime>
#include<windows.h>
#include<cstdlib>
using namespace std;

// void clearScreen(){
//     system("cls");
// }

// class GameArea{
//      protected:
//      char Area[10][10];
//      public:
//        GameArea(){
//         for(int i=0;i<10;i++){
//             for(int j=0;j<10;j++){
//                 Area[i][j]='_';
//             }
//         }


//         for(int i=0;i<10;i++){
//             for(int j=0;j<10;j++){
//                cout<<Area[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//        }


// };

// class Star: public GameArea{

//       protected:
//      const char star='*';

//      public:
     
//      void goRandom(){

//             do{

//     srand(static_cast<unsigned>( time(0)));
//     int randomNum=rand()%7;
//      char option;
//      cout<<"Enter a to generate random number"<<endl;
//      cin>>option;

//      if(option=='a'){
//          clearScreen();
//         cout<<randomNum<<endl;
//         GameArea g1;
//      }
//      else{
//         break;
//      }



//     }while(true);

//      }






// };





// int main(){
//     Star s1;
//     s1.goRandom();
   





//     return 0;
// }

// void showArea(char Area[][10]){
//      for(int i=0;i<10;i++){
//             for(int j=0;j<10;j++){
//                cout<<Area[i][j]<<" ";
//             }
//             cout<<endl;
//         }
// }


// void updateArea(char Area[][10],int ranNum){
//      for(int i=0;i<10;i++){
//             for(int j=0;j<10;j++){
//                 if(j==ranNum && i==ranNum){
//                     Area[i][j]='*';
//                 }
//                 else{
//                Area[i][j]='_';
//                 }
//             }
            
//         }
// }



// int main(){

//     char Area[10][10];
//      char option;


//       do{
//       srand(static_cast<unsigned>( time(0)));
//       int randomNum=rand()%7;
//          cout<<"Enter a to play"<<endl;
//          cin>>option;
//         if(option=='a'){
//             system("cls");
//               showArea(Area);
//             updateArea(Area,randomNum);
//         }
//         else{
//             break;
//         }











//       }while(true);





//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <conio.h> // for _getch() on Windows

// using namespace std;

// const int GRID_WIDTH = 10;
// const int GRID_HEIGHT = 10;

// class Star {
// private:
//     int x, y; // Position of the star
//     char symbol; // Symbol representing the star

// public:
//     Star() {
//         x = rand() % GRID_WIDTH;
//         y = rand() % GRID_HEIGHT;
//         symbol = '*';
//     }

//     void moveDown() {
//         y++; // Move the star down

//         // If the star reaches the bottom of the grid, reset its position to the top
//         if (y >= GRID_HEIGHT) {
//             y = 0;
//             x = rand() % GRID_WIDTH;
//         }
//     }

//     void draw() {
//         // Move cursor to position (x, y) and print the star symbol
//         cout << "\033[" << y + 1 << ";" << x + 1 << "H"; // ANSI escape sequence for moving cursor
//         cout << symbol;
//     }

//     int getX() const { return x; } // Getter method for x-coordinate
//     int getY() const { return y; } // Getter method for y-coordinate
// };

// int main() {
//     srand(time(NULL)); // Seed the random number generator with current time

//     const int FPS = 30; // Frames per second
//     const int NUM_STARS = 5; // Number of stars

//     Star stars[NUM_STARS]; // Array to hold the stars
//     int columnCounters[GRID_WIDTH] = {0}; // Array to hold counters for each column

//     while (true) {
//         system("cls"); // Clear the console (for Windows, use "cls" instead of "clear")

//         // Move and draw each star
//         for (int i = 0; i < NUM_STARS; ++i) {
//             stars[i].draw();
//         }

//         // Display column counters
//         cout << "Column Counters: ";
//         for (int i = 0; i < GRID_WIDTH; ++i) {
//             cout << columnCounters[i] << " ";
//         }
//         cout << endl;

//         // Wait for user input
//         if (_kbhit()) { // Check if a key has been pressed
//             char key = _getch(); // Get the pressed key

//             if (key == 'a') { // If the key is 'a', move all stars downwards
//                 for (int i = 0; i < NUM_STARS; ++i) {
//                     stars[i].moveDown();
//                     if (stars[i].getY() == 0) { // Check if the star reaches the bottom of the grid
//                         columnCounters[stars[i].getX()]++; // Increment the counter for the corresponding column
//                     }
//                 }
//             }
//         }

//         cout << flush; // Flush the output buffer

//         Sleep(1000 / FPS); // Pause to achieve desired FPS
//     }

//     return 0;
// }



#include<iostream>
#include<conio.h>

using namespace std;

int numberIncrement(int *num){
    int *value=new int;
    cout<<"ENTER the number to add"<<endl;
    *value=_getch();
    *num=*num+*value;
    return *num;
}


int main(){

   int number=0;
   

   do{
   cout<<"click a to increase number"<<endl;
   if(_kbhit){
   char key=_getch();
   if(key=='a'){
    system("cls");
    numberIncrement(&number);
    cout<<number<<endl;
   }
   else{
    break;
   }
   }


   }while(true);





    return 0;
}
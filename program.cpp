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

void fillAndAccessArray(int arr[], int size) {
    // Fill the array with some values
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2; // Just an example, you can put any values here
    }

    // Access the values of the array and print them
    std::cout << "Values of the array inside the function:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
}

int main() {
    const int size = 5;
    int myArray[size];

    // Call the function and pass the array and its size
    fillAndAccessArray(myArray, size);

    // Accessing the array values in the main function
    std::cout << "\nValues of the array in the main function:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
    }

    return 0;
}
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;


// class GameArea{
//      private:
//      vector<vector<char>> grid;
//      int size;
//      char gameGrid[];
//      public:
//      GameArea(){
//       cout<<"Enter the size of area"<<endl;
//       cin>>size;
//       grid=vector<vector<char>>(size, vector<char>(size,'_' ));
//      };

//          void printGrid() {
//         for (int i = 0; i < size; ++i) {
//             for (int j = 0; j < size; ++j) {
//                 cout << grid[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//      void setGameGrid(){
//      int size;
//      cout<<"Enter the size of grid"<<endl;
//      cin>>size;
//       char *gameGrid=new char[size];
//      }


//      protected:

// };




// int main(){

//    GameArea g1;
//    g1.printGrid();




//    return 0;
// }



#include<iostream>
#include<ctime>
using namespace std;
int main(){

    int originalArray[] = {3, 7, 1, 9, 5, 2, 6, 8, 4, 10};
    int target = 5;

    int countLessThan = 0;
    int countGreaterThan = 0;

      for (int i = 0; i < sizeof(originalArray) / sizeof(originalArray[0]); ++i) {
        if (originalArray[i] < target) {
            ++countLessThan;
        } else if (originalArray[i] > target) {
            ++countGreaterThan;
        }
    }

    int* lessThanTarget = new int[countLessThan];
    int* greaterThanTarget = new int[countGreaterThan];

     int lessThanIndex = 0;
    int greaterThanIndex = 0;


        for (int i = 0; i < sizeof(originalArray) / sizeof(originalArray[0]); ++i) {
        if (originalArray[i] < target) {
            lessThanTarget[lessThanIndex++] = originalArray[i];
        } else if (originalArray[i] > target) {
            greaterThanTarget[greaterThanIndex++] = originalArray[i];
        }
    }


    return 0;
}
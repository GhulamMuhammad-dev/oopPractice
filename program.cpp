#include<iostream>
#include<string>
#include<vector>
using namespace std;


class GameArea{
     private:
     vector<vector<char>> grid;
     char gameGrid[];
     public:
     GameArea(){
      grid=vector<vector<char>>(10, vector<char>(10,'_' ));
     };

         void printGrid() {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }

     void setGameGrid(){
     int size;
     cout<<"Enter the size of grid"<<endl;
     cin>>size;
      char *gameGrid=new char[size];
     }


     protected:

};











int main(){

   GameArea g1;
   g1.printGrid();




   return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class GameArea{
     private:
     vector<vector<char>> grid;
     int size;
     char gameGrid[];
     public:
     GameArea(){
      cout<<"Enter the size of area"<<endl;
      cin>>size;
      grid=vector<vector<char>>(size, vector<char>(size,'_' ));
     };

         void printGrid() {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
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
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class GameArea{
     private:
     vector<vector<int>> grid;
     char gameGrid[];
     public:
     GameArea(){
      grid=vector<vector<int>>(10, vector<int>(10, 0));
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






   return 0;
}
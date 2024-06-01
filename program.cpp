#include<iostream>
#include<string> 
using namespace std;

class Shape {
public:
    virtual void draw()=0; 
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing square" << endl;
    }
};

int main(){
  Shape* shape;
  
Circle circle;
Square square;

shape=&circle;

circle.draw();

shape = &square;
shape->draw(); // Output: Drawing square
  return 0;
}
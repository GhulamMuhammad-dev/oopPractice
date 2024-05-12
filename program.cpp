// #include<iostream>
// #include<string>
// using namespace std;

// class ShopItem{
//     public:
//      virtual int price()=0;

// };

// class Floar:public ShopItem{
//     public:
//     int price() override{
//       return 2000;
//     }
// };
// class Rice:public ShopItem{
//     public:
//     int price() override{
//       return 7000;
//     }
// };
// class Oil:public ShopItem{
//     public:
//     int price() override{
//       return 10000;
//     }
// };




//  void checkPrice(ShopItem& item){
//     cout<<item.price()<<endl;
//  }


// int main(){

// Rice rice;
// Oil oil;
// checkPrice(rice);
// checkPrice(oil);








//     return 0;
// }



// #include<iostream>
// #include<string>

// using namespace std;


// template<class T1,class T2>

// class ShowData{

//   private:
//   T1 data1;
//   T2 data2;
//   public:
//   ShowData(T1 a,T2 b){
//     data1=a;
//     data2=b;
//   }

//   void show();



// };

// template<class T1,class T2>
// void ShowData<T1,T2>::show(){
// cout<<data1<<" "<<data2<<endl;
// }


// int main(){

//  ShowData <string,int> d1("helloo",223);
//  d1.show();



//   return 0;
// }


// #include<iostream>
// #include<string>

// using namespace std;


// class Employee{
//     private:
//      int id;
//     string name;
//     int salary;
//     public:
//     Employee(string name,int salary){
//          id=current_id++;
//          this->name=name;
//     }
//    int getId() const{
//     return id;
//    }

//    string getName(){
//     return name;
//    }
//    static int current_id;
    
// };

// int Employee::current_id=0;

// ostream& operator<<(ostream&COUT,Employee employee){
//   COUT<<"The id of employee: "<<employee.getName()<<" is "<<employee.getId();
//   return COUT;
// }

// int main(){


// Employee e1("ahmad",2000),e2("danyal",3000),e3("bilal",4000);

// cout<<e3<<endl<<e2;





//   return 0;
// }


// #include <iostream>
// #include <new> 
// #include <cstdlib> 
// using namespace std;

// class CustomAllocator {
// public:
  
//     static void* operator new(size_t size) {
//         cout << "Allocating " << size << " bytes of memory using custom new operator." << std::endl;
//         void* ptr = std::malloc(size);
//         if (!ptr) {
//             throw std::bad_alloc(); // If allocation fails, throw bad_alloc
//         }
//         return ptr;
//     }

//     // Overloading the global delete operator
//     static void operator delete(void* ptr) {
//         std::cout << "Deallocating memory using custom delete operator." << std::endl;
//         std::free(ptr); // Freeing memory
//     }
// };


// class MyClass : public CustomAllocator {
// public:
//     int data;

//     MyClass(int val) : data(val) {
//         std::cout << "MyClass constructor with value: " << val << std::endl;
//     }

//     ~MyClass() {
//         std::cout << "MyClass destructor" << std::endl;
//     }
// };

// int main() {


//     MyClass* obj = new MyClass(2);
//     std::cout << "Object data: " << obj->data << std::endl;
//     delete obj;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Toggle {
// private:
//     bool state; 

// public:
   
//     Toggle(bool initialState = false) : state(initialState) {}

    
//     bool operator!() const {
//         return !state; 
//     }

  
//     bool getState() const {
//         return state;
//     }

  
//     void setState(bool newState) {
//         state = newState;
//     }
// };

// int main() {
   
//     Toggle myToggle(true);

//     cout << "Initial state: " << myToggle.getState() << endl;

  
//     bool toggled = !myToggle;

  
//     cout << "After applying '!': " << toggled << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <stdexcept> 

// using namespace std;


// class DynamicArray {
// private:
//     int* data;   
//     size_t size;

// public:
    
//     DynamicArray(size_t size) : size(size) {
//         data = new int[size]; 
//     }

    
//     ~DynamicArray() {
//         delete[] data; 
//     }

   
//     int& operator[](std::size_t index) {
//         if (index >= size) {
//             throw out_of_range("Index out of range"); 
//         }
//         return data[index]; 
//     }

   
//     size_t getSize() const {
//         return size;
//     }
// };

// int main() {
    
//     DynamicArray arr(5);

  
//     for (std::size_t i = 0; i < arr.getSize(); ++i) {
//         arr[i] = i * 10; 
//     }

   
//     std::cout << "Array contents: ";
//     for (std::size_t i = 0; i < arr.getSize(); ++i) {
//         std::cout << arr[i] << " ";
//     }
//     cout << endl;

//     try {
//         cout << "Attempting to access index 6: " << arr[6] << std::endl;
//     } catch (const std::out_of_range& e) {
//         cout << "Error: " << e.what() << std::endl; 
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Dimension{
//       private:
//       int length;
//       int width;
//      public:
//      Dimension(){};
//      Dimension(int l,int w):length(l),width(w){

//      } ;


//      Dimension operator+(Dimension &D1){
//         Dimension temp;
//         temp.length=length+D1.length;
//         temp.width=width+D1.width;
//         return temp;
//      }

//      void output(){
//         cout<<length<<":"<<width<<endl;
//      }









// };







// int main(){

//     Dimension d1(12,16),d2(12,4),res;
//     res=d1+d2;
//     res.output();
//     return 0;
// }



// #include <iostream>
// #include <vector>

// // Base class representing a generic animal
// class Animal {
// public:
//     // Virtual destructor ensures derived class destructors are called
//     virtual ~Animal() {}

//     // Virtual function that derived classes will override
//     virtual void speak() const {
//         std::cout << "Animal makes a sound." << std::endl;
//     }
// };

// // Derived class representing a Dog
// class Dog : public Animal {
// public:
//     // Override the speak method for Dog
//     void speak() const override {
//         std::cout << "Dog barks: Woof!" << std::endl;
//     }
// };

// // Derived class representing a Cat
// class Cat : public Animal {
// public:
//     // Override the speak method for Cat
//     void speak() const override {
//         std::cout << "Cat meows: Meow!" << std::endl;
//     }
// };


// int main() {
   
//     std::vector<Animal*> animals;

   
//     animals.push_back(new Dog());
//     animals.push_back(new Cat());
//     animals.push_back(new Animal());

   
//     for (const auto& animal : animals) {
//         animal->speak(); 
//     }

   
//     for (auto& animal : animals) {
//         delete animal;  
//     }

//     return 0;
// }


#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the makeSound function
    void makeSound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the makeSound function
    void makeSound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    // Create instances of Dog and Cat
    Dog dog;
    Cat cat;

    // Polymorphic behavior - calling makeSound on objects of base class type
    Animal* animal1 = &dog;
    Animal* animal2 = &dog;

    // Calling makeSound for each object
    animal1->makeSound(); // Output will be "Dog barks"
    animal2->makeSound(); // Output will be "Cat meows"

    return 0;
}

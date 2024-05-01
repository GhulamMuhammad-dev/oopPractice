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



#include <iostream>
using namespace std;

class Toggle {
private:
    bool state; 

public:
   
    Toggle(bool initialState = false) : state(initialState) {}

    
    bool operator!() const {
        return !state; 
    }

  
    bool getState() const {
        return state;
    }

  
    void setState(bool newState) {
        state = newState;
    }
};

int main() {
   
    Toggle myToggle(true);

    cout << "Initial state: " << myToggle.getState() << endl;

  
    bool toggled = !myToggle;

  
    cout << "After applying '!': " << toggled << std::endl;

    return 0;
}
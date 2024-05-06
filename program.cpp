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



#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <cmath>
#include <algorithm>

// Point structure representing coordinates on the grid
struct Point {
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    bool operator==(const Point& other) const { return x == other.x && y == other.y; }
};

// Hash function for unordered containers with Point keys
struct PointHash {
    size_t operator()(const Point& p) const {
        return std::hash<int>()(p.x) ^ (std::hash<int>()(p.y) << 1);
    }
};

// Manhattan distance as the heuristic function
int heuristic(const Point& a, const Point& b) {
    return std::abs(a.x - b.x) + std::abs(a.y - b.y);
}

// Structure representing a node in the search space
struct Node {
    Point point;
    int g;  // Cost from the start node
    int h;  // Heuristic cost to the goal node
    Node* parent;
    Node(const Point& p, int g = 0, int h = 0, Node* parent = nullptr) 
        : point(p), g(g), h(h), parent(parent) {}

    int f() const { return g + h; }  // Total cost
};

// Comparator for the priority queue
struct NodeCompare {
    bool operator()(const Node* a, const Node* b) const {
        return a->f() > b->f();  // Lower f comes first
    }
};

// A* algorithm with a priority queue and a set for open nodes tracking
std::vector<Point> a_star(const std::vector<std::vector<int>>& grid, const Point& start, const Point& goal) {
    std::priority_queue<Node*, std::vector<Node*>, NodeCompare> open_list;
    std::unordered_set<Point, PointHash> open_set;
    std::unordered_set<Point, PointHash> closed_list;

    open_list.push(new Node(start, 0, heuristic(start, goal)));
    open_set.insert(start);

    const std::vector<Point> directions = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };  // 4-way movement

    while (!open_list.empty()) {
        Node* current = open_list.top();
        open_list.pop();
        open_set.erase(current->point);

        if (current->point == goal) {
            // Reconstruct the path
            std::vector<Point> path;
            Node* node = current;
            while (node) {
                path.push_back(node->point);
                node = node->parent;
            }
            std::reverse(path.begin(), path.end());
            return path;
        }

        closed_list.insert(current->point);

        for (const Point& dir : directions) {
            Point neighbor(current->point.x + dir.x, current->point.y + dir.y);

            // Out-of-bounds check or wall check
            if (neighbor.x < 0 || neighbor.y < 0 || 
                neighbor.x >= grid.size() || 
                neighbor.y >= grid[0].size() || 
                grid[neighbor.x][neighbor.y] == 1) {
                continue;
            }

            if (closed_list.count(neighbor)) {
                continue;  // Already processed this node
            }

            int tentative_g = current->g + 1;  // Cost from start to this neighbor

            // Check if the neighbor is in the open_list (tracked by open_set)
            if (open_set.count(neighbor) == 0) {
                int h = heuristic(neighbor, goal);
                open_list.push(new Node(neighbor, tentative_g, h, current));
                open_set.insert(neighbor);  // Add to open_set
            }
        }
    }

    // No path found
    return {};
}

int main() {
    // 0 = passable, 1 = wall
    std::vector<std::vector<int>> grid = {
        {0, 0, 0, 1},
        {0, 1, 0, 1},
        {0, 0, 0, 0},
        {1, 1, 0, 0},
    };

    Point start(0, 0);
    Point goal(2, 3);

    std::vector<Point> path = a_star(grid, start, goal);

    if (!path.empty()) {
        std::cout << "Path found:\n";
        for (const Point& p : path) {
            std::cout << "(" << p.x << ", " << p.y << ") -> ";
        }
        std::cout << "Goal\n";
    } else {
        std::cout << "No path found.\n";
    }

    return 0;
}

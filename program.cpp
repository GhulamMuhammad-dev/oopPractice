// #include<iostream>
// #include<stdlib.h>
// #include<iomanip>
// #include<conio.h>
// #include<string>

// using namespace std;

// class Employee{
//     private:
//     mutable string name;
//     mutable int salary;
//     mutable string status;
//     mutable bool active;




//     public:
//     Employee(){};


//      void setEmployInfo (string name,int salary,string status,bool active) const{
//         this->name=name;
//         this->salary=salary;
//         this->status=status;
//         this->active=active;
//     }

//     void showEmploysInfo() const{
     
//      cout<<"Name: "<<name<<endl;
//      cout<<"salary: "<<salary<<endl;
//      cout<<"status: "<<status<<endl;
//      cout<<"active: "<<active<<endl;



//     }
    




// };











 
// int main() 
// { 

//     time_t start, end; 
//     time(&start); 
 
//     ios_base::sync_with_stdio(false); 
 
//      int totalEmployee;
//      cout<<"Enter the number of employees"<<endl;
//     cin>>totalEmployee;

//     const Employee *employees=new Employee[totalEmployee];
//    string empName;
//    int empSalary;
//    string empStatus;
//    bool empisActive;

//    for(int i=0;i<totalEmployee;i++){
//     cout<<"Enter the name of employee "<<i+1<<endl;
//     cin>>empName;
//     cout<<"Enter the salary of employee "<<i+1<<endl;
//     cin>>empSalary;
//     cout<<"Enter the status of employee "<<i+1<<endl;
//     cin>>empStatus;
//     cout<<" Is Active Employee "<<i+1<<endl;
//      cin>>empisActive;
//     employees[i].setEmployInfo(empName,empSalary,empStatus,empisActive);
//    }

//    for(int i=0;i<totalEmployee;i++){
//     employees[i].showEmploysInfo();
//    }



















//     time(&end); 
 


































//     // Calculating total time taken by the program. 
//     double time_taken = double(end - start); 
//     cout << "Time taken by program is : " << fixed 
//         << time_taken << setprecision(5); 
//     cout << " sec " << endl; 
//     return 0; 
// } 







#include <iostream>
#include<string>
using namespace std;


class Libarary {
private:
    mutable int bookID;
    string name;
    string author;
    bool borrowStatus;
public:
    Libarary() {};
    Libarary(int id,string name,string author,bool borrowStatus){
        this->bookID = id;
        this->name = name;
        this->author = author;
        this->borrowStatus = borrowStatus;
    };

    void setData(int id, string name, string author, bool borrowStatus) {
        this->bookID = id;
        this->name = name;
        this->author = author;
        this->borrowStatus = borrowStatus;
    };

    void allocateBook(bool borrowStatus) {
        this->borrowStatus = borrowStatus;

    }

    void displayBooks() {
        cout << "id: " << bookID+1 << endl;
        cout << "name: " << name << endl;
        cout << "author: " << author << endl;
        if (borrowStatus) {
            cout << "book is available........" << endl;
       }
        else {
            cout << "Book is not available......." << endl;
        }
    }


    void acceptBook() {
        if (this->borrowStatus == 1) {
            cout << "This book is available" << endl;
        }
        else {
            cout << "This book is not available" << endl;
        }
        

    }








};

int main()
{


    int totalBooks;
    cout<<"Enter the number of books you want to enter"<<endl;
    cin>>totalBooks;
     Libarary *books=new Libarary[totalBooks];
    int id;
    string name;
    string author;
    bool borrowStatus;

    for (int i = 0; i < totalBooks; i++) {
        cout << "Enter the id:" << endl;
        cin >> id;
        cout << "Enter the name:" << endl;
        cin >> name;
        cout << "Enter the author:" << endl;
        cin >> author;
        cout << "Enter the borrowStatus:" << endl;
        cin >> borrowStatus;
        books[i].setData(id, name, author, borrowStatus);
    }

   

        for (int i = 0; i < totalBooks; i++) {
            books[i].displayBooks();
        }
do{
        char option;
        cout << "You want to borrow book or retuen the book b/r" << endl;
        cin >> option;
        
        if (option == 'b') {
            int bookId;
            cout << "Enter the id of book" << endl;
            cin >> bookId;
            books[bookId].displayBooks();
            books[bookId].acceptBook();
            cout << "You borrow it" << endl;
            books[bookId].allocateBook(0);


            for (int i = 0; i < totalBooks; i++) {
                books[i].displayBooks();
            }


        }
        else if (option == 'r') {
            int bookId;
            cout << "Enter the id of book" << endl;
            cin >> bookId;
            books[bookId].displayBooks();
            books[bookId].acceptBook();
            cout << "You rteun it" << endl;
            books[bookId].allocateBook(1);

            for (int i = 0; i < totalBooks; i++) {
                books[i].displayBooks();
            }
        }

        else{
            break;
        }

        }while(true);
        


        return 0;


    
}
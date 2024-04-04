#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#include<string>

using namespace std;

class Employee{
    private:
    mutable string name;
    mutable int salary;
    mutable string status;
    mutable bool active;




    public:
    Employee(){};


     void setEmployInfo (string name,int salary,string status,bool active) const{
        this->name=name;
        this->salary=salary;
        this->status=status;
        this->active=active;
    }

    void showEmploysInfo() const{
     
     cout<<"Name: "<<name<<endl;
     cout<<"salary: "<<salary<<endl;
     cout<<"status: "<<status<<endl;
     cout<<"active: "<<active<<endl;



    }
    




};











 
int main() 
{ 

    time_t start, end; 
    time(&start); 
 
    ios_base::sync_with_stdio(false); 
 

   const Employee employees[4];
   string empName;
   int empSalary;
   string empStatus;
   bool empisActive;

   for(int i=0;i<4;i++){
    cout<<"Enter the name of employee "<<i+1<<endl;
    cin>>empName;
    cout<<"Enter the salary of employee "<<i+1<<endl;
    cin>>empSalary;
    cout<<"Enter the status of employee "<<i+1<<endl;
    cin>>empStatus;
    cout<<" Is Active Employee "<<i+1<<endl;
     cin>>empisActive;
    employees[i].setEmployInfo(empName,empSalary,empStatus,empisActive);
   }

   for(int i=0;i<4;i++){
    employees[i].showEmploysInfo();
   }



















    time(&end); 
 


































    // Calculating total time taken by the program. 
    double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed 
        << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0; 
} 
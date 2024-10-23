//Q2. Passing object argument to a function eg salary function passing employee object as argument, Returning object from a function

#include<iostream>
using namespace std;
class Employee
{
    public: string name;
            int id,usalary,salary=50000;    
            Employee()
            {
                cout<<"Name: "; cin>>name;
                cout<<"ID: "; cin>>id;
                cout<<"Updated salary: "; cin>>usalary;
            }
            void display()
            {
                cout<<"After update: "<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"ID: "<<id<<endl;
                cout<<"Updated salary: Rs. "<<salary<<endl;
            }
};

Employee updateSalary(Employee e)
{
    cout<<endl<<"Before update, Salary: Rs. "<<e.salary<<endl;
    e.salary=e.usalary;
    return e;
}

int main()
{
    Employee e1,e2;
    e1=updateSalary(e1);
    e1.display();
    e2=updateSalary(e2);
    e2.display();    
    return 0;
}
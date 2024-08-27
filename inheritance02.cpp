/* Date: 06 August 2024
 * Consider the above employee class and add a manager class to it.
 * The manager class has variables: advance_salary and vehicle and method to print the advance_salary and vehicle. 
 * Manager is the child class and permanent_employee is the parent class. */

#include <iostream>
using namespace std;
class employee
{
    int employee_id; 
    string employee_name, employee_address;
    public: void getdata()
            {
                cout<<"Enter your details without spacebar"<<endl;
                cout<<"Enter your Name: "; cin>>employee_name;
                cout<<"Enter your Employee id: "; cin>>employee_id;
                cout<<"Enter your Address in brief: "; cin>>employee_address;
            }
            void employee_info()
            {cout<<"Name: "<<employee_name<<endl<<"ID: "<<employee_id<<endl<<"Address: "<<employee_address<<endl;}
};
class permanent_employee: public employee
{
    float basic_pay,da,hra,ta,salary;
    
    public:void compute_salary();
    void display_salary()
    {
        employee_info();
        cout<<"Gross salary: "<<salary<<endl;
    }
};

void permanent_employee::compute_salary()
{
    float chra,cda,cta;
    cout<<"Enter your Basic Salary in Rs.: "; cin>>basic_pay;
    cout<<"Enter your House Rent Allowance in %: "; cin>>hra;
    cout<<"Enter your Dearness Allowance in %: "; cin>>da;
    cout<<"Enter your Travel Allowance in %: "; cin>>ta;

    chra=(basic_pay/100.0)*hra;
    cda=(basic_pay/100.0)*da;
    cta=(basic_pay/100.0)*ta;
    salary=basic_pay+chra+cda+cta;
}

class manager: public permanent_employee
{
    int advance_salary;
    string vehicle;
    public: manager()
            {
                getdata();
                compute_salary();
                take();
                display_salary();
                cout<<"Advance Salary: "<<advance_salary<<endl<<"Vehicle: "<<vehicle<<endl; 
            }
            inline void take()
            {
                cout<<"Enter Advance Salary you want in Rs.: "; cin>>advance_salary;
                cout<<"Enter the vehicle you wish to opt for: "; cin>>vehicle;
            }
};

int main()
{
    manager a;
    return 0;
}
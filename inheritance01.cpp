/* Date: 06 August 2024
 * Create class called employee; The class employee has 3 variables: employee_id, employee_name, employee_address and method to display employee_info().
 * There is a child class called permanent_employee which has 4 variables: basic_pay, da, hra, ta and a method to compute salary and also a method to 
   display salary. 
 * permanent_employee is the child class and employee is the parent class. */

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
    void compute_salary();
    public: void display_salary()
            {
                compute_salary();
                employee_info();
                cout<<"Gross salary: Rs. "<<salary<<endl;
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

int main()
{
    permanent_employee sobj;
    sobj.getdata();
    sobj.display_salary();
    return 0;
}
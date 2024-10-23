//Q1b. Demonstrate i/o for array of class objects, eg. employees

#include <iostream>
using namespace std;
class staff
{
    char name[30];
    int id,age; 
    public: void getdata()
            {
                cout<<"Name: "; cin>>name;
                cout<<"Age: "; cin>>age;
                cout<<"Employee ID: "; cin>>id;
            }
            void putdata()
            {cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Employee ID: "<<id<<"\n\n";}
};

int main()
{
    staff employee[3];
    for(int i=0; i<3; i++)
    {
        cout<<"Enter Employee Details for Employee No. "<<(i+1)<<": "<<endl;
        employee[i].getdata();
    }
    cout<<endl<<"Employee Details Received: "<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Employee "<<(i+1)<<": "<<endl;
        employee[i].putdata();
    }
    return 0;
}
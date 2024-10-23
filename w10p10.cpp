//Q10. Single inheritance program with base and derived class constructors and destructors.

#include<iostream>
using namespace std;
class base
{
    public: base()
            {cout<<"Base constructor called"<<endl;}
            ~base()
            {cout<<"Base destructor called"<<endl;}
};
class derived:public base
{
    public: derived()
            {cout<<"Derived constructor called"<<endl;}
            ~derived()
            {cout<<"Derived destructor called"<<endl;}
};
int main()
{
    derived a;
    return 0;
}
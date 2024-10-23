//Q6. Program with pure virtual function

#include<iostream>
using namespace std;
class base
{
    public: virtual void display()=0;
};
class derived:public base
{
    public: void display() override
            {cout<<"display overidden";}
};
int main()
{
    base* ptr=new derived;
    ptr->display();
    return 0;
}
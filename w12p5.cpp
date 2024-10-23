//Q5. Program with virtual function

#include<iostream>
using namespace std;
class base
{
    public: virtual void display()
            {cout<<"base"<<endl;}
};
class derived:public base
{
    public: void display() override
            {cout<<"derived";}
};
int main()
{
    base* ptr=new derived;
    ptr->display();
    return 0;
}
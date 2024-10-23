//Q3. Program with pointer to derived class

#include<iostream>
using namespace std;
class base
{
    public: void bdisplay()
            {cout<<"base";}
};
class derived:public base
{
    public: void ddisplay()
            {cout<<"derived";}
};
int main()
{
    derived d;
    base* ptr=&d;
    ptr->bdisplay();
    return 0;
}
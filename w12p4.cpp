//Q4. Using base class pointer to access derived class object

#include<iostream>
using namespace std;
class base
{
    public: void bdisplay()
            {cout<<"base"<<endl;}
};
class derived:public base
{
    public: void ddisplay()
            {cout<<"derived";}
};
int main()
{
    base* ptr=new derived;
    ptr->bdisplay();
    derived* dptr=static_cast<derived*>(ptr);
    dptr->ddisplay();
    return 0;
}
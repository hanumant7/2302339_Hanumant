//Q3. Defining function inside and outside class

#include <iostream>
using namespace std;
class simple
{
    public: void in()
            {cout<<"inside class"<<endl;}
            void out();
};

void simple::out()
{cout<<"outside class"<<endl;}
int main()
{
    simple sobj;
    sobj.in();
    sobj.out();
    return 0;
}
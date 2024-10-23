//Q1a. Program with Single Inheritance; class parent and child

#include <iostream>
using namespace std;
class parent
{
    public: void display()
            {
                cout<<"parent"<<endl;
            }
};
class child: public parent
{
    public: void show()
            {
                cout<<"child";
            }
};
int main()
{
    child c;
    c.display();
    c.show();
    return 0;
}
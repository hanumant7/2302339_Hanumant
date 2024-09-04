//Q4. Program with multiple inheritance; eg. Parent1, Parent2 and child class

#include <iostream>
using namespace std;
class parent1
{
     public: void show1()
            {
                cout<<"Parent1"<<endl;
            }
};
class parent2
{
    public: void show2()
            {
                cout<<"Parent2"<<endl;
            }
};
class child: public parent1, public parent2
{
    public: void display()
            {
                cout<<"Child"<<endl;
            }
};
int main()
{
    child c;
    c.show1();
    c.show2();
    c.display();
    return 0;
}
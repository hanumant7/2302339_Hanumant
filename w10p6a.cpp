//Q6a. Program with hierarchical inheritance; eg. parent, child1 and child2 class

#include <iostream>
using namespace std;
class parent
{
     public: void show()
            {
                cout<<"parent"<<endl;
            }
};
class child1: public parent
{
    public: void showc1()
            {
                cout<<"child1"<<endl;
            }
};
class child2: public parent
{
    public: void showc2()
            {
                cout<<"child2"<<endl;
            }
};
int main()
{
    child1 c1;
    child2 c2;
    c1.show();
    c1.showc1();
    c2.show();
    c2.showc2();
    return 0;
}
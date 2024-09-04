//Q5. Program with multilevel inheritance; eg. grandparent, parent and child class

#include <iostream>
using namespace std;
class grandparent
{
     public: void show1()
            {
                cout<<"grandparent"<<endl;
            }
};
class parent: public grandparent
{
    public: void show2()
            {
                cout<<"parent"<<endl;
            }
};
class child: public parent
{
    public: void display()
            {
                cout<<"child"<<endl;
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
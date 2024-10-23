//Q7. Program with hybrid inheritance; eg. grandparent, parent1, parent2 and child class

#include <iostream>
using namespace std;
class grandparent
{
     public: void show()
            {
                cout<<"grandparent"<<endl;
            }
};
class parent1: public grandparent
{
    public: void showp1()
            {
                cout<<"parent1"<<endl;
            }
};
class parent2: public grandparent
{
    public: void showp2()
            {
                cout<<"parent2"<<endl;
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
    //c.show();
    c.showp1();
    c.showp2();
    c.display();
    return 0;
}
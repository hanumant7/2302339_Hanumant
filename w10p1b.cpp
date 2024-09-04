//Q1b. Program with Single Inheritance; animal and cat

#include <iostream>
using namespace std;
class animal
{
    public: void display()
            {
                cout<<"animal"<<endl;
            }
};
class cat: public animal
{
    public: void show()
            {
                cout<<"cat";
            }
};
int main()
{
    cat c;
    c.display();
    c.show();
    return 0;
}
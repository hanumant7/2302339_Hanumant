//Q2. Program with private, public visibility modifiers in single inheritance

#include <iostream>
using namespace std;
class animal
{
    private: void pdisplay()
            {
                cout<<"This is private method in paent class and accessed in same class"<<endl;
            }
    public: void display()
            {
                pdisplay();
                cout<<"This is public method in parent class which called private method"<<endl;
            }
};
class cat: public animal
{
    public: void show()
            {
                cout<<"And this is public method in child class";
            }
};
int main()
{
    cat c;
    c.display();
    c.show();
    return 0;
}
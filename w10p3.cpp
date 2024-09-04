//Q3. Program with protected visibility modifier in single inheritance

#include <iostream>
using namespace std;
class animal
{
    protected: void display()
            {
                cout<<"This is protected but accessed through child class"<<endl;
            }
};
class cat: public animal
{
    public: void show()
            {
                display();
                cout<<"And this is public";
            }
};
int main()
{
    cat c;
    c.show();
    return 0;
}
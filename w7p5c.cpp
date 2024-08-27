//Q5c. Demonstrate copy constructor.

#include <iostream>
using namespace std;
class cons
{
    string name;
    int age;
    public: cons(int a, string n)
            {
                cout<<"Original constructor is called: "<<endl;
                name=n;
                age=a;
            }
            cons(cons& a)
            {
                cout<<endl<<"Copy constructor is called: "<<endl;
                name=a.name;
                age=a.age;
            }
            void display()
            {cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;}

};

int main()
{
    cons a(30,"aaa");
    a.display();
    cons b(a);
    b.display();
    return 0;
}
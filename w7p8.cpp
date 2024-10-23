//Q8. Initialise objects dynamically with constructors

#include<iostream>
using namespace std;
class Sample
{
    public: string name;
            Sample(string a):name(a) {}
            void display()
            {    cout<<"Name: "<<name<<endl;}
};

int main() 
{
   Sample *ptr = new Sample("abc");
   ptr->display();
   delete ptr;
   return 0;
}
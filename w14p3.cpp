//Q3. Program with class template with single parameter

#include<iostream>
using namespace std;
template<typename T>
class Sample
{
    public: T a;
            Sample(T x):a(x){}
            void display()
            {cout<<a<<endl;}
};
int main()
{
    Sample<float> s1(5.6);
    s1.display();
    Sample<string> s2("hello");
    s2.display();
    return 0;
}
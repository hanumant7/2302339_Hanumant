//Q4. Program with class template with multiple parameters

#include<iostream>
using namespace std;
template<typename T,typename U>
class Sample
{
    public: T a;
            U b;
            Sample(T x,U y):a(x),b(y){}
            void display()
            {cout<<"A: "<<a<<" & B:"<<b<<endl;}
};
int main()
{
    Sample<float,int> s1(5.6,7);
    s1.display();
    Sample<string,bool> s2("hello",true);
    s2.display();
    return 0;
}
//Q5. Program with member function templates

#include<iostream>
using namespace std;
template<typename T>
class Sample
{
    public: T a;
            Sample(T x):a(x){}
            T ReturnValue()
            {return a;}
};
int main()
{
    Sample<float> s1(5.6);
    cout<<"Value: "<<s1.ReturnValue()<<endl;
    Sample<string> s2("hello");
    cout<<"Value: "<<s2.ReturnValue()<<endl;
    return 0;
}
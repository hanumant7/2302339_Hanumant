//Q1. Simple program with pointer to object

#include<iostream>
using namespace std;
class Sample
{
    public: void display()
            {cout<<"Program with pointer to object";}
};
int main()
{
    Sample a;
    Sample* ptr=&a;
    ptr->display();
    return 0;
}
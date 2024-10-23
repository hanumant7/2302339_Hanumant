//Q2. Program using this pointer to access class members

#include<iostream>
using namespace std;
class Sample
{
    int num;
    public: Sample(int n) : num(n) {}
            void display()
            {   cout<<"Num: "<<this->num<<endl;}
};

int main() {
    Sample s(36); 
    s.display();
    return 0;
}

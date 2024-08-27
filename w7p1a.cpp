//Q1a. Demonstrate i/o for array of class objects.

#include <iostream>
using namespace std;
class product
{
    char name[30];
    int price; 
    public: void getdata()
            {
                cout<<"Name: "; cin>>name;
                cout<<"Price: "; cin>>price;
            }
            void putdata()
            {cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;}
};

int main()
{
    product t[3];
    for(int i=0; i<3; i++)
    {
        cout<<"Enter Product: "<<(i+1)<<endl;
        t[i].getdata();
    }
    cout<<endl<<"The products you entered: "<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Product: "<<(i+1)<<endl;
        t[i].putdata();
    }
    return 0;
}
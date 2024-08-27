//Accept student details name, age, roll no., address

#include<iostream>
using namespace std;
int main()
{
    int age, roll;
    string name, add; 
    cout<<"Enter your details below: "<<endl<<"Name: ";
    cin>>name;
    cout<<"Age: ";
    cin>>age;
    cout<<"Roll No.: ";
    cin>>roll;
    cout<<"Address: ";
    cin>>add;

    cout<<endl<<"These are the details you have entered: "<<endl<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl<<"Roll No.: "<<roll<<endl<<"Address: "<<add;
    return 0;
}
//Q3. Demonstrate friend function eg. average() to calculate average of students marks

#include<iostream>
using namespace std;
class Student
{
    int marks[6];   //assumming there are 6 subjects
    public: Student()
            {
                cout<<"Enter marks of 6 subjects: "<<endl;
                for (int i=0;i<6;i++)
                {
                    cout<<"Subject "<<(i+1)<<": ";
                    cin>>marks[i];
                    cout<<endl;
                }
            }
            friend float average(Student s);
};
float average(Student s)
{
    int sum=0;
    for (int i = 0; i < 6; i++)
    sum+=s.marks[i];
    return (sum/6.0);
}

int main()
{
    Student s;
    float avg=average(s);
    cout<<"Average marks: "<<avg;
    return 0;
}
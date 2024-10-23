//Q4. Demonstrate pointers to members eg.update() marks of student

#include<iostream>
using namespace std;
class Student
{
    public: int marks;   //assumming there are 6 subjects
            Student(int m):marks(m){}
            void update(int nMarks) 
            {   marks=nMarks;}
            void display() 
            {    cout<<marks<<endl;}
};
int main()
{
    Student s(66);
    cout<<"Before update, Marks: "; s.display();
    void (Student::*ptrToUpdate)(int) = &Student::update;
    (s.*ptrToUpdate)(89);
    cout<<"After update, Marks: "; s.display();
    return 0;
}
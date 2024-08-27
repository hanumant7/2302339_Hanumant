//Q1. Simple program with structure

#include <iostream>
using namespace std;
int main()
{
    struct simple
    {
        int i=1;
        string word="hello";
    }sobj;
    
    cout<<sobj.i<<". "<<sobj.word<<endl;
    return 0;
}
#include<iostream>
using std::cout;
int main()
{
    int age=13;
    try{
        if(age>=18)
            cout<<"Access granted your old enough";
        else
            throw age;
    }
    catch(int mynum)
    {
        cout<<"Access denied you must be at least 18 years\n";
        cout<<"Age: "<<mynum;
    }
    return 0;
}

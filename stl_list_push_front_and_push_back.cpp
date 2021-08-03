#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string>l1{"raj","rahul","rock","rohit"};

    l1.push_back("aman");
    l1.push_front("shani");

    list<string>::iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}

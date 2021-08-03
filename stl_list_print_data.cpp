#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1{10,20,30};
    list <int>::iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
}

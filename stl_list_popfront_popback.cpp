#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int>l1{1,2,3,4};
    list <int>::iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    l1.pop_front();
    l1.pop_back();
    list <int>::iterator q=l1.begin();
    while(q!=l1.end())
    {
        cout<<*q<<" ";
        q++;
    }

}

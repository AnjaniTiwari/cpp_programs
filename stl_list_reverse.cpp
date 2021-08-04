#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1{1,2,3};
    l1.reverse();
//    l1.clear();       clear function
    list <int>::iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}

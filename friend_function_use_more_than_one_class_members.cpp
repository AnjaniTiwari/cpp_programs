#include<iostream>
using namespace std;
class B;    //forward declaration
class A
{
    int n1=1;
public:
    friend void add(A,B);
};
class B
{
    int n2=2;
public:
    friend void add(A,B);
};
void add(A o1,B o2)
{
    cout<<o1.n1+o2.n2;
}
int main()
{
    A o1;
    B o2;
    add(o1,o2);
    return 0;
}

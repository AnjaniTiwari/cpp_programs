#include<iostream>
using std::cout;
using std::endl;
template <class A>
A grater(A x,A y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
  cout<<grater(1,2)<<endl;
  cout<<grater(4.2,2.5)<<endl;
  return 0;
}

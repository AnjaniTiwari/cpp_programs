#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <char*,int> t1;
    char s[]="swapnil";
    t1=make_tuple(s,10);
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1);
    return 0;
}


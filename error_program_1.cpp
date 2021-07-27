#include<iostream>
using namespace std;
int* a(int s)
{
  int arr[s];
  return arr;
}
input()
{
    int *p=a(3);
  cout<<"Enter a no:";
    for(int i=0;i<3;i++)
    {
       cin>>*(p+i);
    }
}
int main()
{

    return 0;

//    for(int i=0;i<3;i++)
//    {
//       cout<<*(p+i)<<endl;
//    }
}


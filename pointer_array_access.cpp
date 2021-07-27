#include<iostream>
using namespace std;
int* create_arr(int size_arr)
{
    int no_arr[size_arr];
    return no_arr;
}
void input_array(int size_arr)
{
    int *p_arr=create_arr(size_arr);
    cout<<"Enter "<<size_arr<<" no:"<<endl;
    for(int i=0;i<size_arr;i++)
    {
      cin>>*(p_arr+i);
    }
}
int main()
{
    input_array(3);
}

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int*input_number(int);
void print_array(int*,int);
int main()
{
    int x;
    cout<<"Enter how many numbers your enter:";
    cin>>x;
    int *n=input_number(x);
    print_array(n,x);

}
int *input_number(int n)
{
    int *roll_no=new int[n];
    cout<<"Enter "<<n<<" number:";
    for(int i=0;i<n;i++)
        cin>>roll_no[i];
    return roll_no;
}
void print_array(int *p,int l)
{
    for(int i=0;i<l;i++)
        cout<<*p+i<<endl;
}

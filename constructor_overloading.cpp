#include<iostream>
using namespace std;
class Add
{
private:
    int sum;
public:
    Add()               //default constructor
    {   }
    Add(int n1)
    {
        sum=n1+0;
        cout<<"\nsum ="<<sum;
    }
    Add(int n1,int n2) //parameterized constructor
    {
        sum=n1+n2;
        cout<<"sum ="<<sum;
    }
};
int main()
{
    Add c1,c2(1,2);
    Add c3=Add(4);    // Add c3(4);   Add c3=4;
    return 0;
}

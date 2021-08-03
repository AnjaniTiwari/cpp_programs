#include<iostream>
using namespace std;
class Num
{
    int *no;
public:
    Num(int n)
    {
        no=new int;
        *no=n;
    }
    void showno()
    {
        cout<<"no: "<<*no;
    }
};
int main()
{
    Num n1(1);
    n1.showno();
}

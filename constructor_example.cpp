#include<iostream>
using namespace std;
class Complex
{
private:
    int n1;
public:
    Complex()
    {
        cout<<"you are in constructor\n";
    }
};
int main()
{
    Complex c1,c2;
    return 0;
}

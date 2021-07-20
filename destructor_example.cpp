#include<iostream>
using namespace std;
class Number
{
public:
    ~Number()   //destructor
    {
        cout<<"run destructor";
    }
};
int main()
{
    Number n1;
}

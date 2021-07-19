#include<iostream>
#include<cstring>
using namespace std;
class abc
{
private:
    char name[20];
    int number;
public:
  void set(int n,char *a)
    {
        number=n;
        strcpy(name,a);
        cout<<name<<" "<<number;
    }
};

int main()
{
    abc a1;
    a1.set(1,"abc");
}

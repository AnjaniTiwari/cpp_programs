#include<iostream>
using namespace std;
class geeks
{
    int *p;
public:
    geeks()
    {
        p=new int[3]{1,2,3};
        for(int i=0;i<3;i++)
        {
            cout<<p[i];
        }
        cout<<endl;
    }
};
int main()
{
    geeks *g=new geeks[5];
    return 0;
}

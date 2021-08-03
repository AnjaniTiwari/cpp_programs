#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>n{1,2,3};
    for(int i=0;i<=n.size();i++)
        cout<<n[i]<<" ";

    cout<<endl;
    n.pop_back();
    for(int i=0;i<=n.size();i++)
        cout<<n[i]<<" ";

    cout<<endl;
    n.pop_back();
    for(int i=0;i<=n.size();i++)
        cout<<n[i]<<" ";

    cout<<endl;
    n.pop_back();
    for(int i=0;i<=n.size();i++)
        cout<<n[i]<<" ";

}

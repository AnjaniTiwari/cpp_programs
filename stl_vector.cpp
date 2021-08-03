#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v{1,2,3};
    vector <string> v2{4};//vector size 4
    vector <string> v3{3,"Hello"};//all three initializes Hello
    for(int i=0;i<3;i++)
        cout<<v3[i]<<endl;

    vector <int>v1;
    cout<<"current capacity "<<v1.capacity();
    for(int i=0;i<5;i++)
        v1.push_back(10*(i+1));
    cout<<"\ncurrent capacity "<<v1.capacity();
    cout<<endl;
    cout<<"\nshow all data\n";
    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";
    for(int i=0;i<5;i++)
        v1.pop_back();
    cout<<"\nshow all after pop data\n";
    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";
    cout<<endl<<"total element size "<<v1.size();   //using size function

    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";
    v1.clear();                 //clear function use
    cout<<"\ncapacity: "<<v1.capacity();
    cout<<"\nelement size: "<<v1.size();
    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";

    cout<<"\nnew \n";

    vector<int>v5{1,2,3,4,5};
    cout<<v5.at(0)<<endl;
    cout<<v5.front()<<endl;
    cout<<v5.back();
    return 0;
}

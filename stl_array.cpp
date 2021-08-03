#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>array_data={1,2,3,4,5};
    cout<<array_data.at(0);
    cout<<array_data[1];
    cout<<array_data.front();
    cout<<array_data.back();
    array_data.fill(0);
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<array_data.at(i)<<" ";//cout<<array_data[i]
    cout<<endl;
    array <int,5> array_data2={11,22,33,44,55};
    array <int,5> array_data3={9,8,7,6,5};
    array_data2.swap(array_data3);
    cout<<"array_data2: ";
    for(int i=0;i<5;i++)
        cout<<array_data2[i]<<" ";
    cout<<endl;
    cout<<"array_data3: ";
    for(int i=0;i<5;i++)
        cout<<array_data3[i]<<" ";
    cout<<endl<<"size is array_data: "<<array_data.size();
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bId;
    char bTitle[20];
    float bPrice;
};
int main()
{
    book b1={1,"Android",120.301};
    cout<<b1.bId<<" "<<b1.bTitle<<" "<<b1.bPrice<<endl;

    book b2;
    b2.bId=2;
    strcpy(b2.bTitle,"C programming");
    b2.bPrice=200;
    cout<<b2.bId<<" "<<b2.bTitle<<" "<<b2.bPrice<<endl;

    struct book b3;  //struct keyword is optional c++
    cout<<"Enter Book id";
    cin>>b3.bId;
    cout<<"\nEnter Book Title";
    cin>>b3.bTitle;
    cout<<"\nEnter Book Price";
    cin>>b3.bPrice;
    cout<<"\n"<<b3.bId<<" "<<b3.bTitle<<" "<<b3.bPrice<<endl;

    return 0;
}

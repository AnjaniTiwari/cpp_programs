#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> customer;
    customer[100]="amit";
    customer[123]="govind";
    customer[145]="dilip";
    customer[171]="shalid";
    customer[200]="rajesh";


    map<int,string> c{{100,"amit"},{123,"govind"},{145,"dilip"},{171,"shalid"},{200,"rajesh"}};

//    print customer name without using iterator

    cout<<customer[100]<<endl;
    cout<<customer[123]<<endl;
    cout<<customer[145]<<endl;
    cout<<customer[171]<<endl;
    cout<<customer[200]<<endl;

//    print customer name using iterator
    cout<<endl;
    map<int,string>::iterator p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->first<<" "<<p->second<<endl;
        p++;
    }
}

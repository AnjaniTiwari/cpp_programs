#include<iostream>
#include<string>
using namespace std;
int main()
{
//    string s1="hello";
//    string s2;
//    s2="hello";
//    string s3;
//    s3=s1+s2;
//    cout<<s3<<endl;
//    cout<<s1+s2;
//
//    cout<<endl;
//    if(s1==s2)
//        cout<<"string is same";
//    else
//        cout<<"string is not same";
//
    string s1="hello";
    cout<<s1.insert(2,"123")<<endl;   //he123llo
    cout<<s1.replace(2,6,"llo");    //hello

    cout<<endl;
    string s2="Hello online student";
    cout<<s2.find("online");

    cout<<endl;
    string s3="hello online online online student";
    cout<<s3.rfind("online");
}

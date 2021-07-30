#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("simple.dat");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(6);                   //shift g_pointer position
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(0,ios_base::beg);   //shift beginning index to 0 index
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(2,ios_base::cur);   //shift current index to 2 index
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(-11,ios_base::end);   //shift end index to -11 index
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();


}

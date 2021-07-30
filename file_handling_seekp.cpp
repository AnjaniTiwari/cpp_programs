#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("simple.dat",ios::app);
    fout.seekp(1,ios_base::beg);
    cout<<fout.tellp();
    fout<<"123";
    return 0;
}

#include<iostream>
#include<fstream>
using std::cout;
using std::ofstream;
using std::ifstream;
using namespace std;
int main()
{
    ofstream fout;
    fout.open("simple.dat",ios::app|ios::binary);
    fout<<"Hello program\n";
    fout.close();
    ifstream fin;
    fin.open("simple.dat",ios::in);
    char c;
    c=fin.get();
    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();
    }
    fin.close();
    return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//    ifstream fin;
//    fin.open("simple.dat");
//    int pos;
//    char c;
//    pos=fin.tellg();
//    cout<<pos;          //o
//    fin>>c;
//    pos=fin.tellg();
//    cout<<pos;          //1
//    fin.close();

    ofstream fout;
    fout.open("simple.dat",ios::app);
    int pos;
    pos=fout.tellp();
    cout<<pos;
    fout<<"world";
    pos=fout.tellp();
    cout<<pos;
    return 0;
}

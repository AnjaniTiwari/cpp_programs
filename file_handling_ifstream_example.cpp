#include<iostream>
#include<fstream>
using std::cout;
using std::ifstream;
int main()
{
    ifstream fin;
    fin.open("simple.txt");
    char c;
    c=fin.get();//fin>>c;
    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();//fin>>c;
    }
    fin.close();
    return 0;
}

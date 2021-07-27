#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("simple.txt");
    fout<<"hello world";
    fout.close();
    return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("simple.txt");
    fout<<"Hello world";
    fout.close();
    return 0;
}

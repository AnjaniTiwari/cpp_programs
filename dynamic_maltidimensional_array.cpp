#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<rows<<columns;
    int **table=new int*[rows];
    for(int i=0; i<=rows; i++)
    {
        table[i]=new int[columns];
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin>>table[i][j];
        }
    }

      for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<table[i][j]<<endl;
        }
    }

}

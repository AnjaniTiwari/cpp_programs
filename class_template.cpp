#include<iostream>
using std::cout;
using std::cin;
using std::cout;

class List_array
{
private:
    struct block
    {
        int capacity;
        int *arr;
    };
    block *p;
public:
    List_array(int capacity)
    {
        p=new block;
        p->capacity=capacity;
        p->arr=new int[capacity];
    }
    void add_element(int index,int data)
    {
        if(index>=0&&index<=p->capacity-1)
            p->arr[index]=data;
        else
            cout<<"\nArray index is invaild"
    }
};

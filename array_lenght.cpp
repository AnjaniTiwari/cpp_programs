#include<iostream>
using namespace std;
class array_calculation
{
public:

    int get_min(int* p, int length)
    {
        int temp = *p;
        for (int i = 1; i < length; i++)
        {
            if (temp > *(p + i))
                temp = *(p + i);
        }
        return temp;

    }

    int get_max(int* p, int length)
    {
        int temp = *p;
        for (int i = 1; i < length; i++)
        {
            if (temp < *(p + i))
                temp = *(p + i);
        }
        return temp;

    }

};
int main()
{
    int s[] = { 4,5,1 };
    array_calculation a1;
    cout<<"Array min value: "<<a1.get_min(s,3)<<endl;
    cout << "Array max value: " << a1.get_max(s, 3)<<endl;
    return 0;
}

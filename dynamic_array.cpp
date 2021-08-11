#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enetr size of array: ";
	cin >> size;
	//int array[size];  error

	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "] = ";
		cin >> *(arr + i);
	}
	cout << "end";

	/*for (int i = 0; i < size; i++) {
		cout << "array[" << i << "] = " << *(arr + i) << end;
	}*/


	return 0;
}
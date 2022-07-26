#include "print.h"
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << int(arr[i]) << tab;
	}
	cout << endl;
}
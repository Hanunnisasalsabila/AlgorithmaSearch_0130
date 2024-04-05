#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum and maximum 20 elements.\n\n";
	}

	cout << "\n-------------\n";
	cout << " Enter array elements \n";
	cout << "\n-------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;
	int item;

	do
	{
		cout << "\nEnter the elemnt you want to search: ";
		cin >> item;
		ctr = 0;
		i = 0;
		while (i < n)
		{

		}
	}
}
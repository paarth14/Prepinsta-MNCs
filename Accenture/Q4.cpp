// Question 4: 'Num' & 'Diff'

#include <bits/stdc++.h>
using namespace std;

int findCount(int arr[], int length, int num, int diff)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (abs(arr[i] - num) <= diff)
		{
			count++;
		}
	}
	if (count > 0)
	{
		return count;
	}
	else
	{
		return -1;
	}
}

int main()
{

	int length;
	cout << "Enter the length: ";
	cin >> length;

	int arr[length];
	for (int i = 0; i < length; i++)
	{
		cout << "Enter elements for the array: ";
		cin >> arr[i];
	}

	int num;
	cout << "Enter num: ";
	cin >> num;

	int diff;
	cout << "Enter diff: ";
	cin >> diff;

	cout << findCount(arr, length, num, diff);

	return 0;
}

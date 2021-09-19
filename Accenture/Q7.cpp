// Question 7: Smallest Product Pair

#include <bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int sum, int arr[], int n)
{
	if (n < 2)
	{
		return -1;
	}

	sort(arr, arr + n);
	// 1, 2, 3, 4, 5, 7, 9

	for (int i = 0; i < n; i++)
	{
		if (arr[i] + arr[i + 1] <= sum)
		{
			return arr[i] *arr[i + 1];
			break;
		}
	}
	return 0;
}

int main()
{

	int n;
	cout << "Enter size of array: "<< endl;
	cin >> n;

	int arr[n];
	cout << "Enter Elements of array: "<< endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum;
	cout << "Enter SUM " << endl;
	cin >> sum;

	cout << ProductSmallestPair(sum, arr, n);

	return 0;
}

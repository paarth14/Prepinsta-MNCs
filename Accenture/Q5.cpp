// Question 5: Difference of Sum

#include <bits/stdc++.h>
using namespace std;

int differenceofSum(int n, int m)
{

	int divisible = 0;
	int notDivisible = 0;

	for (int i = 1; i <= m; i++)
	{
		if (i % n == 0)
		{
			divisible += i;
		}
		else
		{
			notDivisible += i;
		}
	}
	int difference = (notDivisible - divisible);
	cout << "Difference is : " << difference;
}

int main()
{

	int n;
	cout << "Enter number (n) : " << endl;
	cin >> n;

	int m;
	cout << "Enter number (m) : " << endl;
	cin >> m;

	differenceofSum(n, m);

	return 0;
}

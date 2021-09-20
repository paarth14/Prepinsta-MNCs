// Question 12: Operation Choices

#include <bits/stdc++.h>
using namespace std;

int OperationChoices(int a, int b, int c)
{
	if (c == 1)
	{
		return a + b;
	}
	else if (c == 2)
	{
		return a - b;
	}
	else if (c == 3)
	{
		return a * b;
	}
	else
	{
		return a / b;
	}
}

int main()
{

	int a;
	cout << "Enter a : ";
	cin >> a;

	int b;
	cout << "Enter b : ";
	cin >> b;

	int c;
	cout << "Enter c : ";
	cin >> c;

	cout << OperationChoices(a, b, c);
	return 0;
}

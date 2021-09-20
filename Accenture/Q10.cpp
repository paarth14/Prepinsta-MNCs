// Question 10: Number of Carries


#include <bits/stdc++.h>
using namespace std;

int NumberOfCarries(int num1, int num2)
{
	int carry = 0;
	int count = 0;
	int p, q, sum;

	while (num1 != 0 and num2 != 0)
	{
		p = num1 % 10;	// 451,45,4 ===> p = 1,5,4
		q = num2 % 10;	// 349,34,3 ===> q = 9,4,3

		sum = (carry + p + q);	// sum = 10,9,7
		if (sum > 9)
		{
			carry = 1;
			count++;	// 1,2 ===> count = 2
		}
		else
		{
			carry = 0;
		}

		num1 = num1 / 10;	// 451/10 ===>  num1 = 45
		num2 = num2 / 10;	// 349/10  ===> num2 = 34
	}
	return count;
}

int main()
{

	int num1;
	int num2;

	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;

	cout << NumberOfCarries(num1, num2);
	return 0;
}

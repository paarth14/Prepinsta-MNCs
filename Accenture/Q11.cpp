// Question 11: Replace Character

#include <bits/stdc++.h>
using namespace std;

string ReplaceCharacter(string str, char ch1, char ch2)
{
	if (ch1 == ch2)
	{
		return str;
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch1)
		{
			str[i] = ch2;
		}
		else if (str[i] == ch2)
		{
			str[i] = ch1;
		}
	}
	return str;
}

int main()
{

	string str;
	cout << "Enter a string : ";
	cin >> str;

	char ch1;
	char ch2;

	cout << "Enter 1st character : ";
	cin >> ch1;

	cout << "Enter 2nd character : ";
	cin >> ch2;
	cout << endl;

	cout << ReplaceCharacter(str, ch1, ch2);
	return 0;
}

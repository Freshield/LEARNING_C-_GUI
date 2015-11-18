// exercise8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int i = 10;
	do
	{
		if (i == 5)
		{
			i--;
			continue;
		}
		cout << i << endl;
		i--;
		
		

	} while (i > 0);

	int sum = 0;
	int count;
	cin >> count;

	for (int j = 1; j <= count;j++)
	{
		sum += j;

	}
	cout << sum << endl;
	
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= 1; j--)
		{

			if (i < j)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			
		}
		cout << endl;
	}

	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		for (int j = count; j >= 1; j--)
		{

			if (i > j)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}

		}
		cout << endl;
	}

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (i*j < 10)
			{
				cout << "0" << i*j << " ";
			}
			else
			{
				cout << i*j << " ";
			}
		}
		cout << endl;
	}

	char lll;
	while (1)
	{
		cin >> lll;

		if (lll == 'e')
		{
			break;
		}
		else
		{
			cout << lll << endl;
		}
	}
	count = 1;
	for (int i = 1; i <= 10; i++)
	{
		count *= i;
	}
	cout << count << endl;

	int first = 0;
	int second = 1;
	int change;
	cin >> count;
	for (i = 3; i <= count; i++)
	{
		change = first + second;
		first = second;
		second = change;

	}
	cout << change << endl;
    return 0;
}


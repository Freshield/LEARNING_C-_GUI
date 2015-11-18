// exercise9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int big(int , int );
int sum(int a, int b);
int cumulate(int p);
int factorial(int p);
int fibonacci(int p);

int main()
{
	int a, b,x,y,z = 0;
	cout << big(22, 11) << " is bigger" << endl;
	cout << sum(22, 11) << endl;
	cout << "input a,b to sum" << endl;
	cin >> a;
	cin >> b;
	cout << a + b << endl;
	cout << "input x to cumulate" << endl;
	cin >> x;
	cout << x << endl;
	x = cumulate(x);
	cout << x << endl;
	cout << "input y to factorial" << endl;
	cin >> y;
	cout << factorial(y) << endl;
	cout << "input z to fibonacci" << endl;
	cin >> z;
	cout << fibonacci(z) << endl;
    return 0;
}

int fibonacci(int p)
{
	int first = 0;
	int second = 1;
	int change = 0;

	for (int i = 3; i <= p; i++)
	{

		change = first + second;
		first = second;
		second = change;
		

	}
	return change;

}

int factorial(int p)
{
	int mul = 1;
	for (int i = 1; i <= p; i++)
	{
		mul *= i;
	}
	return mul;
}

int cumulate(int p)
{
	int sum = 0;
	for (int i = 1; i <= p; i++)
	{
		sum += i;
	}
	return sum;
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

int big(int a, int b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
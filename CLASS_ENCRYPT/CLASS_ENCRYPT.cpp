// CLASS_ENCRYPT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Encrypt.h"
#include <iostream>

using namespace std;  

int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
char b[26];

int main()
{
	for (int i = 1; i <= 26; i++)
	{
		b[i] = 'a' - 1 + i;
		cout << b[i] << endl;

	}
	int A = 0;
	int B = 0;
	int num;
	int answer = 1234;
	cout << "input four number please" << endl;
	cin >> num;
	int thu = num / 1000;
	int hun = num % 1000 /100;
	int ty = num % 100 / 10;
	int nu = num % 10;

	cout << thu << endl;
	cout << hun << endl;
	cout << ty << endl;
	cout << nu << endl;

	if (thu == 1)
	{
		A++;
	}
	else if (hun == 1 || ty == 1 || nu == 1)
	{
		B++;
	}

	if (hun == 2)
	{
		A++;
	}
	else if (thu == 2 || ty == 2 || nu == 2)
	{
		B++;
	}

	if (ty == 3)
	{
		A++;
	}
	else if (hun == 3 || thu == 3 || nu == 3)
	{
		B++;
	}

	if (nu == 4)
	{
		A++;
	}
	else if (hun == 4 || ty == 4 || thu == 4)
	{
		B++;
	}

	cout << "A: " << A << endl;
	cout << "B: " << B << endl;

	cout << "ANSWER: " << answer << endl;


    return 0;
}


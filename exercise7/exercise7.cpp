// exercise7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int a = 3;
	int b = 5;
	cin >> a;
	cin >> b;
	if (a == b)
	{
		cout << "a = b" << endl;
	}
	else
	{
		cout << "a!= b" << endl;
	}
	switch (a)
	{
	case 0:
		cout << "0" << endl;
		break;
	case 1:
		cout << "1" << endl;
		break;
	case 2:
		cout << "2" << endl;
		break;
	case 3:
		cout << "3" << endl;
		break;
	case 4:
		cout << "4" << endl;
		break;
	case 5:
		cout << "5" << endl;
		break;
	case 6:
		cout << "6" << endl;
		break;
	case 7:
		cout << "7" << endl;
		break;
	case 8:
		cout << "8" << endl;
		break;
	default:
		cout << "null" << endl;

	}
	if (a < 60)
	{
		cout << "<60" << endl;
	}
	else if (60 <= a && a < 80)
	{
		cout << "60 <= a < 80" << endl;
	}
	else if (80 <= a && a < 100)
	{
		cout << "80 <= a < 100" << endl;
	}
	else
	{
		cout << "null" << endl;
	}

    return 0;
}


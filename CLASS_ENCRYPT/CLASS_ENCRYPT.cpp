// CLASS_ENCRYPT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Encrypt.h"
#include <iostream>

using namespace std;  



int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
char b[26];

	int find_a(string num, string answer);
	int find_b(string num, string answer);


	int main()
	{
		for (int i = 1; i <= 26; i++)
		{
			b[i] = 'a' - 1 + i;
			cout << b[i] << endl;

		}
		int A = 0;
		int B = 0;
		string num;
		string answer = "1234";


		while (1)
		{

			cout << "input four number please" << endl;
			cin >> num;

			A = find_a(num, answer);
			B = find_b(num, answer);

			cout << "A: " << A << endl;
			cout << "B: " << B << endl;

			if (A == 4)
			{
				cout << "ANSWER: " << answer << endl;

				break;
			}
			else
			{
				A = 0;
				B = 0;
				cout << "REPEAT" << endl;

			}
		}
		return 0;
	}


	int find_a(string num, string answer)
	{
		int A = 0;
		int B = 0;
		if (num[0] == answer[0])
		{
			A++;
		}
		else if (num[1] == answer[0] || num[2] == answer[0] || num[3] == answer[0])
		{
			B++;
		}

		if (num[1] == answer[1])
		{
			A++;
		}
		else if (num[0] == answer[1] || num[2] == answer[1] || num[3] == answer[1])
		{
			B++;
		}

		if (num[2] == answer[2])
		{
			A++;
		}
		else if (num[1] == answer[2] || num[0] == answer[2] || num[3] == answer[2])
		{
			B++;
		}

		if (num[3] == answer[3])
		{
			A++;
		}
		else if (num[1] == answer[3] || num[2] == answer[3] || num[0] == answer[3])
		{
			B++;
		}

    return A;
	}

	int find_b(string num, string answer)
	{
		int A = 0;
		int B = 0;
		if (num[0] == answer[0])
		{
			A++;
		}
		else if (num[1] == answer[0] || num[2] == answer[0] || num[3] == answer[0])
		{
			B++;
		}

		if (num[1] == answer[1])
		{
			A++;
		}
		else if (num[0] == answer[1] || num[2] == answer[1] || num[3] == answer[1])
		{
			B++;
		}

		if (num[2] == answer[2])
		{
			A++;
		}
		else if (num[1] == answer[2] || num[0] == answer[2] || num[3] == answer[2])
		{
			B++;
		}

		if (num[3] == answer[3])
		{
			A++;
		}
		else if (num[1] == answer[3] || num[2] == answer[3] || num[0] == answer[3])
		{
			B++;
		}

		return B;
	}

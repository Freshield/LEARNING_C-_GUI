#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include "Encrypt.h"

Encrypt::Encrypt()
{
	set_code_array();
}

void Encrypt::set_code_array()
{
	srand(time(0));
	int a = rand() % 10;
	int b = rand() % 10;

	int x, y, m;
	char c = 'a';
	string s;

	for (int i = 1; i <= 26; i++)
	{
		x = c;
		y = x * a + b;
		m = y % 26;
		s += m + 97;
		c++;
	}

	code_array = s;
}

string Encrypt::get_code_array()
{
	return code_array;
}

string Encrypt::ToEncode(string i)
{
	return i;
}

string Encrypt::ToDecode(string i)
{
	return i;
}
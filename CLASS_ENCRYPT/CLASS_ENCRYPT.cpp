// CLASS_ENCRYPT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Encrypt.h"


using namespace std;   
 

int main()   
{
	Encrypt encrypt; 

	cout << encrypt.get_code_array() << endl;

	string d = "There is no spoon.";

	cout << d << endl;

	string r1 = encrypt.ToEncode(d);

	cout << r1 << endl;

    return 0;
}


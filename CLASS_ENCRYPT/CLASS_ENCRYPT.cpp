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

    return 0;
}


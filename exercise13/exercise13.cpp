// exercise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "class_demo4.h" 
#include "IntegerDemo.h"
 
using namespace std;  

int main()
{
	DEMO t1;
	DEMO t2(11);
	DEMO t3(11, 22);

	cout << t1.dosomething() << endl;
	cout << t2.dosomething() << endl;
	cout << t3.dosomething() << endl;

	int x, y, z = 0;

	IntegerDemo b;

	cout << "intput x to add" << endl;
	cin >> x;
	b.add(x);
	cout << b.get_value() << endl;

	cout << "input y to factorial" << endl;
	cin >> y;
	b.factorial(y);
	cout << b.get_value() << endl;
	cout << "input z to fibonacci" << endl;
	cin >> z;
	b.fibonacci(z);
	cout << b.get_value() << endl;


    return 0;
}


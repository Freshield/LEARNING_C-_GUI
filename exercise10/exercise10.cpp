// exercise10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class IntegerDemo
{
public:
	int value;
	void add(int a);
	void subtract(int b);
	void multiple(int c);
	void divide(int d);
	void fibonacci(int p);
	void factorial(int p);
};

void IntegerDemo::add(int a)
{
	value = a + value;
}

void IntegerDemo::subtract(int b)
{
	value = value - b;
}

void IntegerDemo::multiple(int c)
{
	value = value * c;
}

void IntegerDemo::divide(int d)
{
	value = value / d;
}

void IntegerDemo::fibonacci(int p)
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
	value = change;

}

void IntegerDemo::factorial(int p)
{
	int mul = 1;
	for (int i = 1; i <= p; i++)
	{
		mul *= i;
	}
	value = mul;
}

class DEMO
{
public:
	int a;
	int b;
	int do_something();
};

int DEMO::do_something()
{
	return a + b;
}



int main()
{
	int x ,y,z= 0;
	DEMO t;
	t.a = 11;
	t.b = 22;
	cout << t.do_something() << endl;

	IntegerDemo b;
	b.value = 25;
	cout << "intput x to add" << endl;
	cin >> x;
	b.add(x);
	cout << b.value << endl;

	cout << "input y to factorial" << endl;
	cin >> y;
	b.factorial(y);
	cout << b.value << endl;
	cout << "input z to fibonacci" << endl;
	cin >> z;
	b.fibonacci(z);
	cout << b.value << endl;
    return 0;
}


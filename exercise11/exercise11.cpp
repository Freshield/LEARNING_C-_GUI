// exercise11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class IntegerDemo
{
public:
	void add(int a);
	void subtract(int b);
	void multiple(int c);
	void divide(int d);
	void fibonacci(int p);
	void factorial(int p);
	int get_value();
	void set_value(int n);
private:
	int value;

};

void IntegerDemo::set_value(int n)
{
	value = n;
}

int IntegerDemo::get_value()
{
	return value;
}

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
	void set_a(int n);
	void set_b(int n);
	int get_a();
	int get_b();
	int dosomething();
private:
	int a;
	int b;
};

void DEMO::set_a(int n)
{
	a = n;
}

void DEMO::set_b(int n)
{
	b = n;
}

int DEMO::get_a()
{
	return a;
}

int DEMO::get_b()
{
	return b;
}

int DEMO::dosomething()
{
	return a + b;
}
int main()
{
	DEMO t;
	t.set_a(11);
	t.set_b(22);
	cout << t.dosomething() << endl;

	int x, y, z = 0;

	IntegerDemo b;
	b.set_value(25);
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


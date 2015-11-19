
#include "stdafx.h"
#include "IntegerDemo.h"

IntegerDemo::IntegerDemo()
{
	value = 25;
}

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

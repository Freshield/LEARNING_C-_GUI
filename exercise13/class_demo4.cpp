
#include "stdafx.h"
#include "class_demo4.h"
DEMO::DEMO()
{
	a = 1;
	b = 1;
}

DEMO::DEMO(int n1)
{
	a = n1;
	b = n1;
}

DEMO::DEMO(int n1,int n2)
{
	a = n1;
	b = n2;
}

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
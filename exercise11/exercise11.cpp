// exercise11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

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
    return 0;
}


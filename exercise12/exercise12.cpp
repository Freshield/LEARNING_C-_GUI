// exercise12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class DEMO
{
public:
	DEMO();
	DEMO(int n1);
	DEMO(int n1, int n2);
	void set_a(int n);
	void set_b(int n);
	int get_a();
	int get_b();
	int dosomething();
private:
	int a;
	int b;
	
};

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
int main()
{
	DEMO t1;
	DEMO t2(11);
	DEMO t3(11, 22);

	cout << t1.dosomething() << endl;
	cout << t2.dosomething() << endl;
	cout << t3.dosomething() << endl;

    return 0;
}


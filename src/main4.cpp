#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <iostream>

using namespace std;

int main()
{
	char a[] = "1234567890";
	char b[] = "123789456123";
	cout << a << " + " << b << " = " << sum(a, b);
	cin.get();
	return 0;
}
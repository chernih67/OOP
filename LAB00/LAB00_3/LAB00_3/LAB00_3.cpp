// LAB00_3.cpp: Вывод чисел фибоначи.
//
#include "stdafx.h"
#include <assert.h>
#include <iostream>
using namespace std;
// преобразование строки в число
int StringToInt(const char * str, bool & err)
{
	char * pLastChar = NULL;
	int param = strtol(str, &pLastChar, 10);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
}
// Числа Фибоначи
void Fibonachi(int param)
{
	double long y = 0;
	double long x = 1;
	double long fn;
	cout << x << ", ";
	for (int i = 1; i <= param; ++i)
	{
		fn = y + x;
		if (i % 5 != 0)
			cout << fn << ", ";
		else
			cout << fn << ", " << endl;
		y = x;
		x = fn;
	}
}
int main(int argc, char* argv[])
{
	{if (argc != 2)
	{
		cout << "The program needs a number from 1 to 1000 in an argument." << endl;
	}
	}
	bool err;
	int param = StringToInt(argv[1], err);
	if (err)
	{
		cout << "Argument " << argv[1] << " is not a number." << endl;
	}
	Fibonachi(param); 
	return 0;
}


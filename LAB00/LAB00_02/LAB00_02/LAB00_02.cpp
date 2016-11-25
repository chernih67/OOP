// LAB00_02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <assert.h>
#include <iostream>

using namespace std;

// calculates sum of the digits of i
int SumDigits(int i)
{
	int sum = 0;

	// цикл продолжается до тех пор, пока число не станет равным 0
	while (i != 0)
	{
		sum += i % 10;
		i /= 10;
	}

	return sum;
}
// преобразование строки в число
int StringToInt(const char * str, bool & err)
{
	char * pLastChar = NULL;
	int param = strtol(str, &pLastChar, 10);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
}

int main(int argc, char* argv[])
{
	{if (argc != 2)
	{
		cout << "The program needs a number from 1 to 1000 in an argument." << endl;
		return 0;
	}
	}
	{bool err;
		int param = StringToInt(argv[1], err);
		if (err)
		{
			cout << "Argument " <<argv[1] <<" is not a number." << endl;
			return 1;
		}
		for (int x = 1; x <= param; ++x)
		{
			int sum = SumDigits(x);
			{
				if (x % sum == 0)
				{
					cout << x << endl;
				}
			}
		}
	}
	return 0;
}

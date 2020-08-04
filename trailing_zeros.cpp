#include <iostream>
using namespace std;
using l = unsigned long long;

unsigned long long  factorial(l n)
{
	unsigned long long fac = 1;
	for (unsigned long long i = 1; i <= n; ++i)
	{
		fac *= i;
	}
	return fac;
}

int main()
{
	l m;
	cin >> m;
	l zeros = 0;
	l  n = factorial(m);
	cout << n <<endl;
	while (n > 1)
	{

		if (n % 10 == 0)
		{
			zeros++;
			n = n / 10;
		}
		else
			break;
	}
	cout << zeros <<endl;


	return (0);
}


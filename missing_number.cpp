#include <iostream>
#include <stack>
#include <string.h>
using namespace std;


int main()
{
	long long n, k;
	cin >> n;
	long long s = 0;
	long long l = n-1;
	long long  missing;
	while (l--)
	{
		cin >> k;
		s += k;
	}
	missing = n *(n + 1)/2 - s;
	cout << missing << endl;
	return 0;
}

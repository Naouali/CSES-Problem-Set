#include <iostream>
#include <stack>
#include <string.h>
using namespace std;


int main()
{
	int n, k;
	cin >> n;
	int l = n - 1;
	int arr[l];
	int dup[l];
	int i = 0;
	//populate the array of integers ks
	while (l--)
	{
		cin >> k;
		arr[i] = k;
		i++;

	}
	// create a complete array from 1 to n
	int g = 1;
	int m =0;
	while(m <= n)
	{
		dup[m] = g;	
		g++;
		m++;
	}	
	// check for non existing intger between the two arrays

	for(int j = 0; j < n - 1; j++)
	{
		cout << arr[j] ;
		
	
	}
	cout << "---"<< endl;
	for (int b = 0; b < n; b++)
	{
		cout << dup[b];
	}

	return 0;
}

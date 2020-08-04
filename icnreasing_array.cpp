#include <iostream>
using namespace std;
using ll = long long;

/**
 * You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5
*/


int main() 
{
	ll n;
	cin >> n;
	ll arr[n];

	ll perm = 0;
	ll i = 0;
	while (i < n)
	{
		cin  >> arr[i];
		i++;
	}
	for (ll j = 0; j < n; j++)
	{
		if(arr[i] - arr[i + 1] != -1)
		{
			perm++;
		}
	}
	cout << perm << endl;

	return 0;
}



		










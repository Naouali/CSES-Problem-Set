#include <iostream>
using namespace std;
#include <string>
using ll = long long;
/*
 you are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/

int main()
{
	string dna;
	cin >> dna;
	ll n = dna.length();	
	ll i = 0;
	ll rep = 0;
	ll max = 1;
	for (i = 0; i < n; i++)
		{
			if (dna[i] == dna[i + 1])
			{
				max++;	
			}
			else
			{
				max = 1;
			}
			if (rep < max)
			{
				rep = max;
			}
		}
	cout << rep << endl;
	return 0;
}

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	int n;
	long r;
	cin >> n >> r;

	long a[n],b[n];

	for (int i=0;i<n;i++)	cin >> a[i];

	for (int i=0;i<n;i++){
		if (r!=1)	b[i] = log10(a[i]) / log10(r); // storing the powers in b[]
		else	b[i] = log10(a[i]);
	}

	vector<int> hash_table(n,0);
	
	for (int i=0;i<n;i++)	hash_table[b[i]]++;

	int count = 0;

	for (int i=0;i<n-2;i++) {
		if (hash_table[i] > 0 && hash_table[i+1] > 0 && hash_table[i+2] > 0) {
			count += hash_table[i] * hash_table[i+1] * hash_table[i+2];
		}
	}

	cout << count;
	return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int minimum_swaps(int a[], int n) {
	int c = 0;

	for(int i=0;i<n;i++) {
		if (a[i] == i+1)
			continue;
		else {
			swap(a[i],a[a[i]-1]);
			c++;
			i--;
		}
	}

	return c;
}


int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i=0;i<n;i++)	cin >> a[i];
	
	int count = minimum_swaps(a,n);

	cout << count;

	return 0;
}
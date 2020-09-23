#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    cout << t << "th pass" << " \n";
		long money; 
		cin >> money;

		int n;
		cin >> n;
		
		long max = 0;

		int a[n];

		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (max < a[i])	max = a[i];
		}

		vector<int> hash(max,0);
		
		for (int i=0;i<n;i++)	hash[a[i]-1] = i+1;

		for (int i=0;i<=n/2;i++) {
			if(hash[money-a[i]] > 0)	cout << i+1 << " " << hash[money-a[i]] << "\n";
		}
	}
	return 0;
}
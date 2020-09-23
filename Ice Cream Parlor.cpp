#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long money;
		cin >> money;

		int n;
		cin >> n;
		
		long temp;

		map<long,int> map1;
		for (int i=0;i<n;i++) {
			cin >> temp;
			map1.insert(pair<long,int>(temp,++i));
		}

		map<long,int> :: iterator pair_loc;
    
        long val;
        
		for (auto itr = map1.begin();itr != map1.end(); itr++) {
		    
		    val = money - *itr;
			pair_loc = map1.find(val);

			if (pair_loc != map1.end())	cout << itr->second << " " << pair_loc->second << "\n"; 
		}
	}
	return 0;
}
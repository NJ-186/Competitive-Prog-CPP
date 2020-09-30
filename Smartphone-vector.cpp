#include <bits/stdc++.h>
using namespace std;


int main() {

	long t;
	cin >> t;

	vector<long> v(t);
    
	for (int i=0;i<t;i++)	cin >> v[i];
    
    sort(v.begin(),v.end(), greater<long>());

    long check = 1 , max = 0;

    long temp;

	for (auto itr = v.begin() ; itr != v.end() ; itr++) {
	    temp = *itr * check++;
	    if (max<temp)   max = temp;
	}
	
	cout << max;
	
	return 0;
}

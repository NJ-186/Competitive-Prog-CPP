#include<iostream>

using namespace std;

long solve(long x) {

	long res=1,num=0;

	long start = 2;
	while (res<x) {
		res+=start++;	
		if (res > x-start && res < x-1)	num+=1;
		else	num+=2;
	}

	return num;
} 

int main() {
	int t;
	cin >> t;

	while (t--) {
		long n;
		cin >> n;

		long ans = solve(n);

		cout << ans << "\n";
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> hash_table(1000000000,0);
long maximum = 0;

void ins(int b) {
	cout << "in ins";
	hash_table[b-1]++;
	if (maximum < b)    maximum = b;
}

void del(int b) {
	cout << "in del";

	hash_table[b-1] = min(hash_table[b-1]--,0);
}

void check(int b) {
	cout << "in check";

	for (long i=0 ; i<maximum  ; ++i) {
		if (hash_table[i] == b)	{
			cout << "1\n";
			break;
		}
		else	cout << "0\n";
	}
}
int main() {
	int q;
	cin >> q;

	while (q--) {
		int a,b;
		cin >> a >> b;

		if (a==1)	ins(b);
		else if (a==2)	del(b);
		else if (a==3)	check(b);
		else	cout << "Wrong Input";
	}
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a,b;

	vector<int> ar;
	while (n--) {
		cin >> a >> b;
		if ( a == 0 )	ar.push_back(b);
		else {
			for(auto itr = ar.begin(); itr != ar.end() ; itr++){
				ar[itr] = ar[itr] ^ b;
			}
		}
	}

	for(auto itr = ar.begin(); itr != ar.end() ; itr++)	cout << ar[itr];
		
	return 0;
}
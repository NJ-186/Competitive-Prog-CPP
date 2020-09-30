#include <iostream>
#include <vector>
using namespace std;


void reverse(int x) {
	int result = 0;
	while (x!=0){
		result = 10 * result + x%10;
		x = x/10;
	}
	cout << result << "\n";
}
int main() {

	int t;
	cin >> t;

	while (t--) {
		vector<int> ar;

		int temp;

		while(cin>>temp) {
			ar.push_back(temp);
		}

		for (auto itr = ar.begin() ; itr != ar.end() ; ++itr)	reverse(*itr);	
	}
	
	return 0;
}
	
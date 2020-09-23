#include <iostream>
#include <vector>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		
		string s1,s2;
		cin >> s1 >> s2;
	
		vector<int> hash_table(26,0);
	
		for ( int i=0; i < s1.length(); i++) {
			hash_table[int(s1[i]) - 97] = 1;
		}
	
		int flag = 0;
	
		for (int i=0 ; i<s2.length() ; i++) {
			if (hash_table[int(s2[i]-97)] == 1) {
				flag = 1;
				break;
			}
		}
	
		if (flag == 0)	cout << "NO\n";
		else	cout << "YES\n";
		
	} 
	return 0;
}
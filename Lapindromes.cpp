#include <iostream>
#include <vector>
using namespace std;

void lapindrome(string st,vector<int> &hash) {

	int start;

	if (st.length() % 2 == 0)	start = st.length()/2;
	else	start = st.length()/2 + 1;	

	for (int i=start;i<st.length();i++)	hash[int(st[i])-97]--;
}


int main() {

	int t;
	cin >> t;

	while (t--) {
		string s;

		vector<int> hash(26,0);

		cin >> s;

		int size = s.length();

		for (int i=0 ; i < size/2; i++)	hash[int(s[i])-97]++;
	
		lapindrome(s,hash);

		int flag = 1;

		for (int i=0;i<26;i++)	if (hash[i]!=0) {
			flag = 0;
			break;
		}

		if (flag == 1)	cout << "YES" << "\n";
		else 	cout << "NO" << "\n";
	}	
	
	return 0;
}

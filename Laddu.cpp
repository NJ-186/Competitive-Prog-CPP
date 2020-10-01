#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
    	int n;
    	string s;
    	cin >> n >> s;

   		bool ind;
   		if (s[0] == 'I')	ind = false;
   		else    ind = true;

   		int laddu = 0;

   		while (n--) {

   			string s1;

   			cin >> s1;

   			if (s1[8] == 'W') {
   				int num;
   				cin >> num;
   				laddu += 300 + (num<20 ? 20-num : 0);
   			}

   			else if (s1[0] == 'T')	laddu += 300;

   			else if (s1[0] == 'B') {
   				int num;
   				cin >> num;
   				laddu += num;
   			}

   			else	laddu += 50;
   		}

   		if (ind)	cout << laddu/200;
   		else	cout << laddu/400;

   		cout << "\n";

    }
    return 0;
}
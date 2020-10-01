#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool cond1 = false, cond2 = false;

    int count = 0;

    for (int i=0;i<s.length();i++) {
    	if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U') {
    		if ( s[i+1] == 'A'|| s[i+1] == 'E'|| s[i+1] == 'I'|| s[i+1] == 'O'|| s[i+1] == 'U')
    			if ( s[i+2] == 'A'|| s[i+2] == 'E'|| s[i+2] == 'I'|| s[i+2] == 'O'|| s[i+2] == 'U')
    				cond1 = true;
    	}
    	else	count++;
    }

    if (count > 4)	cond2 = true;

    if (cond1 && cond2)	cout << "GOOD";
    else	cout << "-1";
    return 0;
}
#include <iostream>
using namespace std;


int solve(string x) {
	int kick_count = 0, final_count = 0;

	for ( int i=0 ; i<x.length() ; i++) {
		if (x[i] == 'K' && x[i+1] == 'I' && x[i+2] == 'C' && x[i+3] == 'K') {

			kick_count++;
			continue;
		}	

		if (x[i] == 'S' && x[i+1] == 'T' && x[i+2] == 'A' && x[i+3] == 'R' && x[i+4] == 'T') {

			final_count = final_count + kick_count;
		}
	}

	return final_count;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int test_case = 1;
    while(t--) {
    	string s;
    	cin >> s;

    	int count = solve(s);

    	cout << "Case #" << test_case++ << ": " << count << "\n";
    }
    return 0;
}
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
    	long k;
    	cin >> n >> k;

    	vector<long> q(n);

    	for (int i=0;i<n;i++)	cin >> q[i];

    	int days = 0;
    	long final = q[0] - k;

    	for (int i=0;i<n;i++) {
    		if (q[i] < final) {
    		days = 
    	}
    	}
    
    }
    return 0;
}
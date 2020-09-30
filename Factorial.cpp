#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t ;
	cin >> t;
	while (t--) {
		long n;
		cin >> n;
	    
	    long count = 0;
	    while(n!=0) {
	    	count += n/5;
	    	n/=5;
	    }
		cout << count;
	}
	return 0;
}
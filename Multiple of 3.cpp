#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;	
    while (t--) {
    	long n,b;
    	int a;

    	cin >> n >> a >> b;

    	long sum = (a+b) % 10;

    	long result = a+b;

    	for(int i=2;i<n;i++) {
    		b = sum;
    		sum = ( result + b ) % 10;
    		result +=b; 
    	}

    	if ( result % 3 == 0)	cout << "YES";
    	else	cout << "NO";
    	cout << "\n";
    }
    return 0;
}
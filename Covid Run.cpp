#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
    	int n,k,x,y;
    	cin >> n >> k >> x >>y;

    	int check = x;

    	do {
    		check = (check + k) % n;
    	}while(check == x || check == y)

    	if (check == y)	cout << "YES";
    	else	cout << "NO";
    }
    return 0;
}
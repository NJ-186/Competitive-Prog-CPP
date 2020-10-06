#include <iostream>
#include <utility>
#include <cstdlib>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    pair<int,int> res;

    res.first = 0;
    res.second = 0;

    int n1,n2,diff;

    while (n--) {
    	cin >> n1 >> n2;

	    diff = n1 - n2;

	    if (diff > 0 && diff > res.second) {
	    	res.first = 1;
    		res.second = diff;
	    }
	    if (diff < 0 && -diff > res.second) {
    		res.first = 2;
    		res.second = -diff;
	    }	
	}

    cout << res.first << " " << res.second;
    return 0;
}
#include <iostream>
using namespace std;

long solve ( long n, int w, int a[]) {
	long sum = 0;
	for (int i=0;i<w;i++)	sum+=a[i];

	long avg = sum / 2;
	
	long desire = avg % n;

	cout << desire;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int test_case = 1;
    while(t--) {
    	int w;
    	long n;
    	cin >> w >> n;

    	long a[w];

    	for (int i =0;i<w;i++)	cin >> a[i];

    	int sol = solve(n,w,a);

    	//cout << "Case #" << test_case++ << ": " << sol << "\n";
    }
    return 0;
}
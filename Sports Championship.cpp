#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
    	int a[5];
    	for(int i=0;i<5;i++)	cin >> a[i];

    	int max = 0;

    	for (int i=1;i<5;i++)	if (max<a[i])	max = a[i];

    	if (a[0] >= max)	cout << "Champions";
    	else	cout << "-1";
    	cout << "\n";
    }
    return 0;
}
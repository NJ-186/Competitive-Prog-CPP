#include <iostream>
#include <vector>
#include <set>
#include <math.h>
using namespace std;

multiset<int, greater<int>> ans;

void calculate(string x) {
	int len = x.length();
	//cout << len << "\n";
	int sum = 0;
	for (int i=0;i<len;i++) {
		sum+= 26 * sum +  int(x[i]) - 64;
		//cout << sum << "\n";
	}

	ans.insert(sum);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string a[n];

    for (int i=0;i<n;i++)	cin >> a[i];

    for (int i=0;i<n;i++)	calculate(a[i]);

    for (auto itr = ans.begin() ; itr != ans.end() ; itr++)	cout << *itr;

    return 0;
}
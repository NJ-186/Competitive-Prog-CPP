#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;

    	vector<int> ar(n);

    	for(int i=0;i<n;i++)	cin >> ar[i];

    	set<int> pos,neg;

    	for(int i=0;i<n;i++) {
    		if (ar[i]<0)	pos.insert(ar[i]);
    		else	neg.insert(ar[i]);
    	}

    	int pos_sum=0, neg_sum=0;

    	for( auto itr = pos.begin(); itr !=pos.end() ; itr++)	pos_sum+=*itr;

    	for( auto itr = neg.begin(); itr !=neg.end() ; itr++)	neg_sum+=*itr;

    	cout << pos_sum << " " << neg_sum << "\n";
    }
    return 0;
}
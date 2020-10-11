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

        for (int i=0;i<n;i++)   cin >> q[i];

        int carry = 0;
        int j = 0;
        long day = 0;
        do {
            j++;
            day = j < n+1 ? q[j-1] : 0 ;
            carry = carry + day - k;
           // cout << carry << " ";
            if (carry < 0)  break;
        }while (true);

        cout << j << "\n";
    }
    return 0;
}
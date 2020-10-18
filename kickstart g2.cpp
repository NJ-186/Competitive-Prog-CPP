#include <iostream>
using namespace std;

int size;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int test_case = 1;

    while(t--) {
    	
    	cin >> ::size;

    	int a[::size][::size];

    	for (int i=0;i<::size;i++)
    		for(int j=0;j<::size;j++)	cin >> a[i][j];


    	int max_sum = 0, sum = 0;
		int i,j;

		//for rows
		for (int x=0 ; x<::size ; x++) {
			sum = 0;
			i = x;
			j = 0;
			while (i<::size && j<::size) {
				sum+=a[i++][j++];
			}

			if (sum > max_sum)	max_sum = sum;
		}

		//for columns
		for (int y=0 ; y<::size ; y++) {
			sum = 0;
			i = 0;
			j = y;
			while (i<::size && j<::size) {
				sum+=a[i++][j++];
			}

			if (sum > max_sum)	max_sum = sum;
		}

    	cout << "Case #" << test_case++ << ": " << max_sum << "\n"; 
    }
    return 0;
}
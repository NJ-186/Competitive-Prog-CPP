#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n];
	for (int i=0;i<n;i++)	cin >> a[i];

	int pointer = 0, count = 0;

	for (int i=0;i<n;i++){
		if (a[i] == 'U' || a[i] == 'u') {
			pointer++;
		}
		else if(a[i] == 'D' || a[i] == 'd') {
			pointer--;
		}

		if (pointer == 0 && a[i] == 'U')	count++;
	}

	cout << count;
	
	return 0;
}
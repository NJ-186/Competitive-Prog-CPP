#include <iostream>
using namespace std;

int main() {
	int t,n ;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
	    int a[n];
		for (int i=0;i<n;i++)	scanf("%d",&a[i]);
		int count=1,min;
		if (n==1) {
		    printf("%d\n",count);
		    continue;
		}
		min=a[0];
		for(int i=1;i<n;i++) {
			if (a[i] <= min) {
				min = a[i];
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
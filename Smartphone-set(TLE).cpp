#include <iostream>
#include <set>
using namespace std;


int main() {

	long t;
	cin >> t;

	set<long,greater<long>> s1;
    long temp;
    
	while (t--) {
		cin >> temp;
		s1.insert(temp);
	}
    
    long check = 1 , max = 0;
	for (auto itr = s1.begin() ; itr != s1.end() ; itr++) {
	    temp = *itr * check++;
	    if (max<temp)   max = temp;
	}
	
	cout << max;
	
	return 0;
}

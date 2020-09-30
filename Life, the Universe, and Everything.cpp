#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ar;

	int temp;

	while(cin>>temp) {
		if (temp == 42)	break;
		else	ar.push_back(temp);
	}

	for (auto itr = ar.begin() ; itr != ar.end() ; ++itr)	cout << *itr << "\n";
	return 0;
}

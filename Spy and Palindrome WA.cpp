#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    char n1,n2;

    string beg,mid,end;

    int check1=1;

    int pointer = 0;
    
    while (s[pointer] != '-') {
    		if (s[pointer] >= '0' && s[pointer] <='9')	n1 = s[pointer];
    		else if (int(s[pointer]) >=97 && int(s[pointer]) <= 123)	beg+=s[pointer];
    		pointer++;
    	}

    pointer++;

    while (int(s[pointer]) >=97 && int(s[pointer]) <= 123)	{
    	mid+=s[pointer];
    	pointer++;
    }

    n2 = s[pointer];

    pointer+=2;

    while (s[pointer] != '-') {
    	end+=s[pointer];
    	pointer++;
    }

    bool mid_check;

    string temp = mid;

    reverse(temp.begin(),temp.end());

    if (mid == temp)	mid_check = true;
    else	mid_check = false;

    int a,b;

    a = n1 - 48;
    b = n2 - 48;

    while (--a)	beg+=beg;
    while (--b)	end+=end;

    if ( beg == end && mid_check)	cout << "continue";
    else	cout << "return";
    return 0;
}
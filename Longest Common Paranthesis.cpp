#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack <int> st;

    int i = 0;

    int res = 0;

    while (i != s.length()){
        if (s[i] == '(' )   st.push(i);
        
        else if (s[i] == ')') {
            res = max(res, i - st.top() + 1);
            if (!st.empty()) st.pop();
        }
        i++;
    }

    cout << res;

    return 0;
}
#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <string>
#include <stack>

using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    string s; cin >> s;
    stack<char> st;

    st.push(s[0]);

    for (int i=1; i<s.length(); i++) {
        if (st.size() > 0) {
            if (st.top() == s[i]) st.pop();
            else st.push(s[i]);
        }
        else st.push(s[i]); 
    }
   
    cout << (st.size() ? "Yes" : "No") << endl;
}

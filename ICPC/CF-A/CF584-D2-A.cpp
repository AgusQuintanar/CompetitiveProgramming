#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;
#include <string>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n >> t;
    int leading = (n > 1 ? 2 : 1) * t; 
    int leadingLen = to_string(leading).length();

    cout << (leadingLen > n ? "-1" : to_string(leading) + string(n - leadingLen, '0')) << endl; 
}

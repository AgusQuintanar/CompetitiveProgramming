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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    if (t*(n/k) > d + t*(n/(2*k)) - d/t) cout << "YES" << endl; else cout << "NO" << endl;
   
}





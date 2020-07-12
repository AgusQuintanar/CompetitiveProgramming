#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include<set>

using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
    int p, n, x;
    set<int> buckets;

    cin >> p >> n;

    int result = -1;

    for (int i=0; i<n; i++) {
        cin >> x;
        if (buckets.count(x % p) == 1) {
            cout << i+1 << endl;
            return 0;
        }
        else buckets.insert(x % p);
    }
 
	cout << -1 << endl;
}


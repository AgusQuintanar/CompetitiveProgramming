#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    int n; cin >> n;
    long long int prev = 1, next = 1, current;
    for (int i=0; i<=n; i++) {
        current = (prev + next) % 1000000007;
        prev = next;
        next = current;
    }

    cout << (current - 2) % 1000000007 << endl;
}


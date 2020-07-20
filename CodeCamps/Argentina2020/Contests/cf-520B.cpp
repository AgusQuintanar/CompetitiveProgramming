#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <queue>
#include <unordered_set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, counter = 0; cin >> n >> m;

    if (n >= m) cout << n-m << endl;
    else {
        while (n != m) {
            m = (m % 2 == 0) ? m/2: m+1;
            counter++;
        }
        cout << counter << endl;  
    }
              
}

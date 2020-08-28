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

#include <vector>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b; cin >> n;
    bool rated = false;

    vector<int> before (n), after (n);

    for (int i=0; i<n; i++) {
        cin >> a >> b;
        if (a != b) rated = true;
        before[i] = a;
        after[i] = b;
    }

    if (rated) cout << "rated" << endl;
    else {
        bool unrated = false;
        sort(before.begin(), before.end(), greater<int>());
        for (int i=0; i<n; i++) {
            if (before[i] != after[i]) {
                unrated = true; 
                break;
            }
        }
        cout << (unrated ? "unrated" : "maybe") << endl;
    }
    
}

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

    int n; cin >> n;

    int answer = 0;

    for (int i=0; i<n; i++) {
        int count = 0;
        for (int j=0; j<3; j++) {
            int sure; cin >> sure;
            if (sure == 1) count++;
        }
        if (count > 1) answer++;
    }

    cout << answer << endl;
}


// 62 ms	4 KB
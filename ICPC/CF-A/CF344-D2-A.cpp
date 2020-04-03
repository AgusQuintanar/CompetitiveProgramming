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

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int groups = 1;
    int n; cin >> n;

    string lastMagnet, currentMagnet;
    cin >> lastMagnet;

    for (int i=1; i<n; i++) {
        cin >> currentMagnet;
        if (lastMagnet != currentMagnet) {
            groups++;
            lastMagnet = currentMagnet;
        }
    }

    cout << groups << endl;

}
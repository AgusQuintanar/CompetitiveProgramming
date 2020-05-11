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
	int n, b, d; cin >> n >> b >> d;
    int orangeSize, squeezedJuice = 0, wastedTimes = 0;

    for (int i=0; i<n; i++) {
        cin >> orangeSize;
        if (orangeSize <= b) squeezedJuice += orangeSize; 
        if (squeezedJuice > d) {
            wastedTimes++;
            squeezedJuice = 0;
        }
    }

    cout << wastedTimes << endl;
}


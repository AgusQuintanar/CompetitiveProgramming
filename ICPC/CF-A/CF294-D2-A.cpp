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
	vector<int> wires (n);
	for (int i=0; i<n; i++) cin >> wires[i];
	
    int m, x, y; cin >> m;

	for (int i=0; i<m; i++) {
        cin >> x >> y;
        if (x>1) wires[x-2] += y-1;
        if (x<n) wires[x] += wires[x-1] - y;
        wires[x-1] = 0;
    }

    for (int i=0; i<n; i++) cout << wires[i] << endl;
}

// 62 ms	3600 KB
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

	int n, h, tempHeight, width = 0;
	cin >> n >> h;

	for (int i=0; i<n; i++) {
		cin >> tempHeight;
		width = (tempHeight > h) ? width + 2 : width + 1;
	}

	cout << width << endl;
}

// time: 15 ms  || Mem: 8 KB
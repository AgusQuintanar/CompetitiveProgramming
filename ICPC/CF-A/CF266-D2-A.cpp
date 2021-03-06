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

	int n; cin >> n;
	int repitedChars = 0;
	string s; cin >> s;

	for (int i=0; i<n-1; i++) {
		if (s[i+1] == s[i]) repitedChars++;
	}

	cout << repitedChars << endl;

}

//92 ms	0 KB
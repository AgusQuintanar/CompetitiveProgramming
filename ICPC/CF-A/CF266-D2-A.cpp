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
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int calorieCount = 0;
	vector<int> cals (4);
	for (int i=0; i<4; i++) cin >> cals[i];
	string s; cin >> s;

	for (char& c : s) calorieCount += cals[(short)c - 48 - 1];
	cout << calorieCount << endl;
}

// 31 ms	300 KB
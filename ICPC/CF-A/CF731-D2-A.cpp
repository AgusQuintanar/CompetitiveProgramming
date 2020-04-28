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
    string s; cin >> s;

    int rotations = 0,
        prev = 97, //a pointer
        curr,
        minL,
        maxL,
        range1,
        range2;
    for (int i=0; i<s.length(); i++) {
        curr = (int) s[i];
        if (curr > prev) {
            minL = prev;
            maxL = curr;
        }
        else {
            minL = curr;
            maxL = prev;
        }
        range1 = maxL - minL;
        range2 = minL - maxL + 26;
        rotations += (range2 < range1) ? range2 : range1;
        prev = curr;
    }
	cout << rotations << endl;
}

// 31 ms	0 KB
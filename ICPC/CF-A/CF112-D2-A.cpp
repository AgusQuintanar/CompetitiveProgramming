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

    string s1, s2;
    cin >> s1 >> s2;

    int result = 0;
    for (int i=0; i<s1.length(); i++) {
        int asciiChar1 = (int)s1[i], asciiChar2 = (int)s2[i], delta = asciiChar1 - asciiChar2;
        if (abs(delta) != 32 && delta != 0) {
            if (asciiChar1 >= 97) asciiChar1 -= 32;
            if (asciiChar2 >= 97) asciiChar2 -= 32;
            delta = asciiChar1 - asciiChar2;
            result = abs(delta) / delta;
            break;
        }
    }
    cout << result << endl;
}


// 62 ms	12 KB
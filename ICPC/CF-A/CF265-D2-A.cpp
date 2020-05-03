#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include<string>

using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    string colors, instructions;
    cin >> colors >> instructions;
    int current = 1; // index 1 based

    for (char& instruction : instructions) {
        if (colors[current-1] == instruction) current++;
    }

    cout << current << endl;
}

// 60 ms	0 KB


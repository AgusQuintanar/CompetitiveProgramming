#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    float a, b;
    cin >> a >> b;

    cout << int((log10(b/a) / log10(3.0/2))+EPS) + 1 << endl; //be
}

// 31 ms	12 KB
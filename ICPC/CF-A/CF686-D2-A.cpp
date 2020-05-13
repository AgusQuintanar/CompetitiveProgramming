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

	long long n, x, d; cin >> n >> x;
    int kidsDistressed = 0;
    char sign;
    for (int i=0; i<n; i++) {
        cin >> sign >> d;
        if (sign == '+') x += d;
        else {
            if (d <= x) x -= d;
            else kidsDistressed++;
        }
    }
    cout << x << " " << kidsDistressed << endl;
}

// 31 ms	3900 KB
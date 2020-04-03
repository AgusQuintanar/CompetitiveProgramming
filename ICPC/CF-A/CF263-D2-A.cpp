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
    int num;
    for (int i=0; i<25; i++) {
        cin >> num;
        if (num == 1) {
            cout << abs(2-i/5) + abs(2-i%5) << endl;
            break;
        }
    }

}
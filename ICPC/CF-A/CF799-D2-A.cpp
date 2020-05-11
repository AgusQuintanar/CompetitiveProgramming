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

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int bakedCakesWOven = 0, bakedCakesWoutOven = 0;
   
    int seconds = 1;
    while (1) {
        if (seconds % t == 0) {
            bakedCakesWoutOven += k;
            bakedCakesWOven += k;
        } 
        if (seconds > d) {
            if ((seconds - d) % t == 0) bakedCakesWOven += k;
        }
        if (bakedCakesWoutOven >= n) {
            cout << "NO" << endl;
            break;
        }
        if (bakedCakesWOven >= n) {
            cout << "YES" << endl;
            break;
        }
        seconds++;
   }
}





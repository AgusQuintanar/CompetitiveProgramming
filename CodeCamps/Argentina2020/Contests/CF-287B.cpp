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
 
#include <cmath>
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
 
	unsigned long long int n, k, posibleOutputs; 
    cin >> n >> k;
    posibleOutputs = (pow(k, 2) - k + 2) / 2;
 
    if (n <= k) {
        cout << "1" << endl;
    }
    else if (n > posibleOutputs)
        cout << "-1" << endl;
    else {
        unsigned long long int minNumSplitters = 0,
                               min = 0,
                               max = k,
                               avg,
                               avgValue;
 
        while (min <= max) {
            avg = (min + max + 1) / 2;
            avgValue = ((pow(k, 2) - k + 2 + 0.0000001) / 2)  - ((pow(avg-1, 2) - (avg-1) + 2) / 2) + 1;
 
            if (avgValue == n) {
                minNumSplitters += (max - avg + 1);
                cout << minNumSplitters << endl;
                return 0;
            }
 
            else if (avgValue < n){
                minNumSplitters += (max - avg + 1);                
                max = avg - 1;
            }
            else {
                min = avg + 1;
            }
        } 
 
        cout << minNumSplitters + 1 << endl;
    }
 
    
}

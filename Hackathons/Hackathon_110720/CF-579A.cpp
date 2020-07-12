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
#include <string>
#include <math.h> 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    unsigned long long int n, result=0; cin >> n;
    
    while (n != 0) {
        result += n%2;
        n = n/2;
    }

    cout << result << endl;
}

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
	
    unsigned long long int n, k;
    cin >> n >> k;
 
    unsigned long long int evenRange = (n % 2 == 0) ? n/2 : (n/2) + 1,
                           result = (k <= evenRange) ? 2*k-1 : 2*(k-evenRange);
    
    cout << result << endl;
   
}


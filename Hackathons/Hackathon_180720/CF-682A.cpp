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
    cin.tie(nullptr);

    unsigned long long int n, m, counter = 0; cin >> n >> m;

    if (n > m) {
        unsigned long long int temp = n;
        n = m;
        m = temp;
    }
    
    for (unsigned long long int i=1; i<=n; i++) counter += (i%5 + m) / 5; 
    cout << counter << endl;  
              
}

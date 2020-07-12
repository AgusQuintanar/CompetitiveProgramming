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

#include <vector>

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n; cin >> n;
    vector<int> stewards (n);

    int min = 1000000000,
        max = 0,
        s = 0;

    for (int i=0; i<n; i++) {
        cin >> s;
        stewards [i] = s;

        if (s < min) min = s;
        else if (s > max) max = s;
    }

    int counter = 0;

    for (int i=0; i<n; i++) if (min < stewards[i] && stewards[i] < max) counter++;
    
   cout << counter << endl;
}

// 46 ms	4000 KB

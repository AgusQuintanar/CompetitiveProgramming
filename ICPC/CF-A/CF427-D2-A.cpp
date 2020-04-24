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

    int n; cin >> n;
    int availableCops = 0,
        event,
        crimesUntreated = 0;

    for (int i=0; i<n; i++) {
        cin >> event;
        if (event > 0) availableCops += event;
        else {
            if (availableCops == 0) crimesUntreated++;
            else availableCops--;
        }
    }

    cout << crimesUntreated << endl;
}

// 46 ms	0 KB
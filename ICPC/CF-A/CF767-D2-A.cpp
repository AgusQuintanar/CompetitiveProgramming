#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <set>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int maxCandySize = n,
        candySize;

    set <int, greater <int> > unplacedCandies;

    for (int i=0; i<n; i++) {
        
        cin >> candySize;
        if (candySize == maxCandySize) {
            cout << candySize << " ";
            for (int j=--maxCandySize; j>0; j--) {
                if (unplacedCandies.count(j) == 0) break;
                else {
                    cout << j << " ";
                    maxCandySize--;
                }
            }
            cout << endl;
        }
        else {
            unplacedCandies.insert(candySize);
            cout << endl;
        }
    }
}


// 389 ms	3312 KB
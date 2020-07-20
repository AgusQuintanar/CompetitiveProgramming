#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <string>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, distance; cin >> n; 
    string directions; cin >> directions;
    vector<int> coordinates (n);
    int minMoves = 0;

    for (int i=0; i<n; i++) cin >> coordinates[i];

    for (int i=0; i<n-1; i++) {
        if (directions[i] == 'R' && directions[i+1] == 'L') {
            distance = (coordinates[i+1] - coordinates[i]) / 2;
            if (minMoves == 0 || distance < minMoves) minMoves = distance;
        }
    }
    cout << (minMoves ? minMoves : -1) << endl;
}

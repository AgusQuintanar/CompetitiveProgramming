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

bool has_less_strength(vector<int> v, int pos) {
    for (int i=pos-1; i>=0; i--) if (v[i] < v[pos]) return true;
    return false;
}

bool has_more_strength(vector<int> v, int pos, int n) {
    for (int i=pos+1; i<n; i++) if (v[i] > v[pos]) return true;
    return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n; cin >> n;
    vector<int> stewards (n);

    for (int i=0; i<n; i++) {
        cin >> stewards [i];
    }

    int counter = 0;

    for (int i=1; i<n-1; i++) {
        if (has_less_strength(stewards, i) && has_more_strength(stewards, i, n)) counter++;
    }

   cout << counter << endl;
}


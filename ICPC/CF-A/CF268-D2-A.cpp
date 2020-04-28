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
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;

    vector<int> localUniforms (n);
    multiset<int> guestUniforms;

    int guestColor,
        uniformChanges = 0;

    for (int i=0; i<n; i++) { //taking input
        cin >> localUniforms[i];
        cin >> guestColor;
        guestUniforms.insert(guestColor);
    }

    for (int i=0; i<n; i++) uniformChanges += guestUniforms.count(localUniforms[i]);
    
    cout << uniformChanges << endl;

}

// 92 ms	200 KB
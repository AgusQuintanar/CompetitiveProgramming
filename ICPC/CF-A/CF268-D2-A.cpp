#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <vector>
#include <unordered_map> 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;

    vector<int> localUniforms (n);
    unordered_map<int, int> guestUniforms;

    int guestColor,
        uniformChanges = 0;

    for (int i=0; i<n; i++) { //taking input
        cin >> localUniforms[i];
        cin >> guestColor;

    }

    unordered_map<int, int> :: const_iterator c_it;

    for (int i=0; i<n; i++) {
        c_it = guestUniforms.find(localUniforms[i]);
        if (c_it != guestUniforms.end()) uniformChanges += c_it->second;
    }

    cout << uniformChanges << endl;
}





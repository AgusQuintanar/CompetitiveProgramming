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

#include<vector>

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n, giftBy; cin >> n;
    vector<int> gifts (n);

    for (int i=1; i<=n; i++) {
        cin >> giftBy;
        gifts[giftBy-1] = i;
    }

    for (int i=0; i<n; i++) cout << gifts[i] << " ";
    cout << endl;
}

//92 ms	3900 KB
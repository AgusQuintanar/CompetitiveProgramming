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

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, diff; cin >> n >> diff;
    string password;

    int i = 0;
    while (i < n) {
        for (int j=0; j<diff && i<n; j++) password += (char)(97 + (i++)%diff%26);
    }

    cout << password << endl;
   
}

// 46 ms	3900 KB
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

#include <string>
#include <vector>

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    vector<string> rows (4);
  
    for (int i=0; i<4; i++) {
        cin >> rows[i];
    }

    int a , b;
    char corner;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            a = 1;
            b = 0;
            corner = rows[i][j];
            for (int k=1; k<4; k++) if (corner == rows[i + k/2][j + k%2]) a++; else b++;
        
            if (a>=3 || b>=3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}


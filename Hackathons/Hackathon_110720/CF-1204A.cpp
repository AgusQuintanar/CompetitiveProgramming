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
#include <math.h> 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    string s; cin >> s;
    bool containsMoraThanOne1 = false;

    for (int i=1; i<s.length(); i++) {
        if (s[i] == '1') {
            containsMoraThanOne1 = true;
            break;
        }
    }

    int result;

    if (s.length() % 2 != 0 && !containsMoraThanOne1) result = s.length()/2;
    else result = ceil(s.length() / 2.0);

    cout << result << endl;
}

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
	string fullHour, hour, min;
    bool isHour = true;
    cin >> fullHour;

    for (const char &c: fullHour) {
        if (c == ':') isHour = false;
        else if (isHour) hour += c; 
        else min += c; 
    }

    int h = stoi(hour), m = stoi(min);
    cout << 30 * ((h%12) + m/60.0) << " " << 6*m << endl;
}


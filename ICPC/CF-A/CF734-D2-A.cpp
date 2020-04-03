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

    int n, anton=0, danik=0;
    cin >> n;

    string scores, winner;
    cin >> scores;

    for (char& c : scores) if (c == 'A') anton += 1; else danik += 1;

    if (anton > danik) winner = "Anton"; else if (danik > anton) winner = "Danik"; else winner = "Friendship";

    cout << winner << endl;
}

// 	31 ms	268 KB
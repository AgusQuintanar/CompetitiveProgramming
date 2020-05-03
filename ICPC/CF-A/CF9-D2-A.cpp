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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

   int y, w, maxDice, chancesOfWin;
   cin >> y >> w;

    maxDice = (y > w) ? y : w;
    chancesOfWin = 6 - maxDice + 1; //since tie is winning the +1 is requiered

    if (chancesOfWin % 6 == 0) cout << "1/1" << endl;
    else if (chancesOfWin % 2 == 0) cout << chancesOfWin/2 << "/" << 3 << endl;
    else if (chancesOfWin % 3 == 0) cout << chancesOfWin/3 << "/" << 2 << endl;
    else cout << chancesOfWin << "/" << 6 << endl;
    
}

// 62 ms	0 KB



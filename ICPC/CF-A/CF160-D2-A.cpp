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

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int totalMoney = 0;
    vector<int> coins (n);

    for (int i=0; i<n; i++) {
        cin >> coins[i];
        totalMoney += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>()); 

    const int minimumMoneyNeeded = totalMoney / 2;
    int moneyTaken = 0;

    for (int i=0; i<n; i++) {
        moneyTaken += coins[i];
        if (moneyTaken > minimumMoneyNeeded) {
            cout << i + 1 << endl;
            break;
        }
    }
              
}

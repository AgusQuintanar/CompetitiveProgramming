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
	cin.tie(0);
    int n; cin >> n;
    vector <int> cards (n);
    for (int i=0; i<n; i++) cin >> cards[i];
    int sereja = 0, 
        dima = 0, 
        leftmostCard, 
        rightmostCard,
        leftmostPointer = 0,
        rightmostPointer = n-1,
        turn = 0;
    while (rightmostPointer - leftmostPointer > -1) {
        leftmostCard = cards[leftmostPointer];
        rightmostCard = cards[rightmostPointer];
        if (rightmostCard > leftmostCard) {
            if (turn % 2 == 0) sereja += rightmostCard; else dima += rightmostCard;
            rightmostPointer--;
        } 
        else {
            if (turn % 2 == 0) sereja += leftmostCard; else dima += leftmostCard;
            leftmostPointer++;
        }
        turn++;
    }
    cout << sereja << " " << dima << endl;
}

// 31 ms || 0 KB
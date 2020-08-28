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

#include <unordered_set>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_set<int> numbers;

    int maxLevel, p, q, temp;

    cin >> maxLevel >> p;

    for (int i=0; i<p; i++) {
        cin >> temp;
        if (temp <= maxLevel) numbers.insert(temp);
    }

    cin >> q;
    for (int i=0; i<q; i++) {
        cin >> temp;
        if (temp <= maxLevel) numbers.insert(temp);
    }

    cout << (numbers.size() == maxLevel ? "I become the guy." : "Oh, my keyboard!") << endl;

}

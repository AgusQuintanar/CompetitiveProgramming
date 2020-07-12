#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <unordered_map> 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;

    unordered_map<int, int> numbers;
    int x;

    for (int i=0; i<n; i++) { 
        cin >> x;
        numbers[x]++;
    }

    unordered_map<int, int> :: const_iterator c_it;

    for (c_it = numbers.begin(); c_it != numbers.end(); c_it++) {
        if (c_it->second > (int) ceil(n / 2.0)) {
            cout << "NO" << endl;
            return 0;
        } 
    }

    cout << "YES" << endl;
}
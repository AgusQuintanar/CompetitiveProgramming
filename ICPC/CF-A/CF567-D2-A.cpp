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

#include<vector>

int get_min(int a, int b, int c) {
    return (abs(a-b) < abs(b-c)) ? abs(a-b) : abs(b-c);
}

int get_max(int a, int b, int c) {
    return (abs(a-b) > abs(b-c)) ? abs(a-b) : abs(b-c);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n; cin >> n;
    vector<int> x_coordinates (n);

    for (int i=0; i<n; i++) {
        cin >> x_coordinates[i];
    }

    int curr, prev, next = x_coordinates[0];
    const int START = x_coordinates[0], END = x_coordinates[n-1];

    for (int i=0; i<n; i++) {
        curr = next;
        next = x_coordinates[i+1];
        if (i==0) cout << abs(next-curr) << " " <<  abs(END-curr) << endl;
        else if (i==n-1) cout << abs(prev-curr) << " " <<  abs(START-curr) << endl;
        else cout << get_min(prev, curr, next) << " " <<  get_max(START, curr, END) << endl;
        prev = curr;
    }
}

//92 ms	3900 KB
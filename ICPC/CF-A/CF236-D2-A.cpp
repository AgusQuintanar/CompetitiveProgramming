#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <set>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    string username; cin >> username;
    set <char, greater <int>> chars;

    for (const char& c : username) chars.insert(c);
             
    string result = (chars.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";
    cout <<  result << endl;
}
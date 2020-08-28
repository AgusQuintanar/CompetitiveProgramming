#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <unordered_set>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_set<char> lettersUsed;
    int n;
    string word; cin >> n >> word;

    for (const char &c : word) lettersUsed.insert(tolower(c));
    cout << (lettersUsed.size() == 26 ? "YES" : "NO") << endl;     
}

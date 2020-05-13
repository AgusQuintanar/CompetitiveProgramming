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
	int n, wordLength; cin >> n;
    string currentWord;

    for (int i=0; i<n; i++) {
        cin >> currentWord;
        wordLength = currentWord.length();
        if (wordLength <= 10) cout << currentWord << endl;
        else cout << currentWord[0] << wordLength-2 << currentWord[wordLength-1] << endl;
    }
}

// 31 ms	3600 KB
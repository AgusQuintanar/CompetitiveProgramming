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

string changeCase(string s, bool toUpper) {
    if (toUpper) for (char& c : s) c = toupper(c); else for (char& c : s) c = tolower(c);
    return s;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    string word; cin >> word;
    int upperCounter = 0;
    bool moreUpperChars = false;

    for (int i=0; i<word.length() && !moreUpperChars; i++) {
        if ((int)word[i] < 97) {
            upperCounter++;
            if (upperCounter > word.length()/2) moreUpperChars = true;
        } 
    }
    word = changeCase(word, moreUpperChars);

    cout << word << endl;
}

// 	62 ms	12 KB

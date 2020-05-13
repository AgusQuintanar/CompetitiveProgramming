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

    string temp;
    char c;
    bool finished = false;
    set<char> lettersSet;
    
    while (!finished) {
        cin >> temp;
        if (temp.length() == 3) {
            if (temp[2] == '}') {
                 lettersSet.insert('a'); //dummy
                break;
            }
        }
        if (temp[0] == '{' && temp [1] != '}') c = temp[1];
        else if (temp[1] == ',') c = temp[0];
        else {
            c = temp[0];
            finished = true;
        }
        if (temp != "{}") lettersSet.insert(c);
    }

    cout << lettersSet.size() << endl;
}


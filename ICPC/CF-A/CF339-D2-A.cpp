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

#include <string>


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
    string sum, result; cin >> sum;
    string ones = "", twos = "", threes = "";

    for (char& c : sum) {
        if (c != '+') {
            if (c == '1') {
                if (ones.length() == 0) ones += "1";
                else ones += "+1" ;
            }
            else if (c == '2') {
                if (twos.length() == 0) twos += "2";
                else twos += "+2" ;
            }
            else {
                if (threes.length() == 0) threes += "3";
                else threes += "+3" ;
            }
        }
    }

    result = ones;
    if (twos.length() > 0) result += (result.length() > 0) ? "+" + twos : "" + twos;
    if (threes.length() > 0) result += (result.length() > 0) ? "+" + threes : "" + threes;

    cout << result << endl;

	
}


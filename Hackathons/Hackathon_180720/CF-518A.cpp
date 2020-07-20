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

    string givenNumber, minimumNumber = ""; cin >> givenNumber;
    char d;
    for (int i=0; i<givenNumber.length(); i++) {
        d=givenNumber[i]; 
        minimumNumber += ((9 - (d-'0') < (d-'0') && (i > 0 || d != '9')) ? (9 - (d-'0')) + '0' : d); 
    }
    cout << minimumNumber << endl;

}

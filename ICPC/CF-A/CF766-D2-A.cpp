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
	
    int result;
    string str1, str2;
    cin >> str1 >> str2;

    if (str1 == str2) result = -1;
    else if (str1.length() > str2.length()) result = str1.length();
    else result = str2.length();

    cout << result << endl;
   
}


//31 ms 4200 kb

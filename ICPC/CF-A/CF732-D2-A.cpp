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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int k, r, shovelsBought = 1;
	cin >> k >> r;

    while ((shovelsBought*k)%10 != 0 && (shovelsBought*k)%10 != r) shovelsBought++;
 
	cout << shovelsBought << endl;
}



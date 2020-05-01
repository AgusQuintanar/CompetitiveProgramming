#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include<set>

using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
    int x, needs2buy = 0;
    set<int> colors;

    for (int i=0; i<4; i++) {
        cin >> x;
       if (colors.count(x) !=0) needs2buy++;
       else colors.insert(x);
    }
 
	cout << needs2buy << endl;
}

// 60 ms	0 KB


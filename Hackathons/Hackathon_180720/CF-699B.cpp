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
#include <unordered_set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    string row;
    char cell;

    unordered_set<int> rows, columns;

    for (int i=0; i<n; i++) {   
        cin >> row;
        for (int j=0; j<m; j++) {
            cell = row[j];
            if (row[j] == '*') {
                columns.insert(j);
                rows.insert(i);
            }
        }
    }

    int occupiedRows = rows.size(), 
        occupiedColumns = columns.size(),
        targetRow = 0,
        targetColumn = 0;

    if (occupiedColumns > 1 && occupiedRows > 1) cout << "NO" << endl;
    else {
        if (occupiedColumns == 1) {
            foreach(const auto& c, columns){
                targetColumn += c;
            }
        }
        else targetColumn = 1;
        if (occupiedRows == 1) foreach(auto &r, rows) targetRow += r;
        else targetRow = 1;
        cout << "YES" << endl << targetRow << " " << targetColumn << endl;
    }

}

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

#include <list>
#include <vector>

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

    list<int> skill1 = {}, skill2 = {}, skill3 = {};
    vector<list<int>> skills (3);
    skills = {skill1, skill2, skill3};

    int n; cin >> n;
    int skill;

    for (int i=0; i<n; i++) {
        cin >> skill;
        skills[skill-1].push_back(i+1);
    }

    int max_teams = skills[0].size();
    if (skills[1].size() < max_teams) max_teams = skills[1].size();
    if (skills[2].size() < max_teams) max_teams = skills[2].size();

    
    cout << max_teams << endl;
    
    for (int i=0; i<max_teams; i++) {
        cout << skills[0].front() << " " << skills[1].front() << " " << skills[2].front() << endl;
        for (int j=0; j<3; j++) skills[j].pop_front();
    }
    
}


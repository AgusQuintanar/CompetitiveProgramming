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
#include <vector>
#include <cstdlib>
using namespace std;

typedef struct {
   unsigned long long int id, width, height;
} Envelope;

bool compareEnvelope (Envelope e1, Envelope e2) {
    if (abs(e1.height - e1.width) == abs(e2.height - e2.width)) return (e1.height * e1.width) < (e2.height * e2.width);
    return abs(e1.height - e1.width) < abs(e2.height - e2.width);
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned long long int n, w, h, chainSize = 0;
    cin >> n >> w >> h;

    vector<Envelope> envelopes (n);

    for (int i=0; i<n; i++) {
        envelopes[i].id = i+1;
        cin >> envelopes[i].width >> envelopes[i].height;
    }

    sort(envelopes.begin(), envelopes.end(), compareEnvelope);

    string chain = "";
    Envelope last;

    for (Envelope e : envelopes) {
        if (e.width > w && e.height > h) {
            if (chainSize == 0) {
                chain += to_string(e.id) + " ";
                chainSize++;
                last = e;
            }
            else if (e.height > last.height && e.width > last.width) {
                chain += to_string(e.id) + " ";
                chainSize++;
                last = e;
            }
        }
    }

    cout << chainSize << endl;
    if (chainSize) cout << chain << endl;

}

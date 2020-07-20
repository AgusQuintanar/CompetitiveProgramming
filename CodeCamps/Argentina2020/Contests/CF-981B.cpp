#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <vector>
using namespace std;

typedef struct {
   unsigned long long int name, profit;
} Element;

bool compareElement(Element e1, Element e2) {
    if (e1.name == e2.name) return (e1.profit > e2.profit);
    return (e1.name < e2.name);
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<Element> elementsTemp (n);
    for (int i=0; i<n; i++) cin >> elementsTemp[i].name >> elementsTemp[i].profit;

    int m; cin >> m;
    vector<Element> elements (n+m);
    for (int i=0; i<n; i++) elements[i] = elementsTemp[i];

    for (int i=n; i<n+m; i++) cin >> elements[i].name >> elements[i].profit;

    sort(elements.begin(), elements.end(), compareElement);

    unsigned long long int lastElement = 0, 
                           maximumProfit = 0;
    Element currentElement;

    for (int i=0; i<n+m; i++) {
        currentElement = elements[i];
        if (currentElement.name > lastElement) {
            lastElement = currentElement.name;
            maximumProfit += currentElement.profit;
        }
    }

    cout << maximumProfit << endl;





    
              
}

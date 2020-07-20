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
   unsigned int l, r;
} Order;

bool compareOrder(Order o1, Order o2) {
    if (o1.r - o1.l == o2.r - o2.l) return (o1.l < o2.l);
    return (o1.r - o1.l < o2.r - o2.l);
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<Order> orders (n);

    for (int i=0; i<n; i++) cin >> orders[i].l >> orders[i].r;

    sort(orders.begin(), orders.end(), compareOrder);

    cout << endl;
    for (int i=0; i<n; i++) cout << orders[i].l << " " << orders[i].r << endl;


    unsigned int lastOrderHour = 0, 
                 maximunOrders = 0;
    Order currentOrder;

    for (int i=0; i<n; i++) {
        currentOrder = orders[i];
        if (currentOrder.l > lastOrderHour) {
            lastOrderHour = currentOrder.r;
            maximunOrders++;
        }
    }

    cout << maximunOrders << endl;





    
              
}

#include <iostream>
#include <vector>
using namespace std;

public static <E extends Comparable <E>> void quicksort(E[] datos) {
        quicksort(datos,0,datos.length-1);
    }

    private static <E extends Comparable <E>> void quicksort(E[] datos, int left, int right) {
        if (left < right) {
            int p = particionar(datos, left, right);
            quicksort(datos,left,p-1);
            quicksort(datos, p+1, right);
        }
    }

    private static <E extends Comparable <E>>int particionar(E[] datos, int left, int right) {
        E pivote = datos[left];
        int i = left + 1;
		for(int j = left+1; j<=right; j++) {
			if (datos[j].compareTo(pivote)<0) {
				swap(datos,i,j);
				i++;
            }
        }
        swap(datos,left,i-1);
		return i-1;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; // numero de elemntos del vector
    vector<int> v (n);
    for (int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end(), compareOrder);
    
    cout << counter << endl;
}
 
 
 

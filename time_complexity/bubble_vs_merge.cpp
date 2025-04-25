// ye program bubble sort ki time complexity ko merge sort se compare karta hai 

#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

void bubblesort(int a[], int n){
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<= n-i-1; j++){
            if(a[j] > a[j+1]){
                swap (a[j], a[j+1]);
            }
        }
    }
}

int main() {
    const int n = 1000;
    int a[n], b[n];

    // Fill array with random numbers
    for(int i = 0; i < n; i++) {
        a[i] = rand();
        b[i] = a[i];  // Copy to b for comparison
    }

    clock_t start, end;

    // Bubble Sort timing
    start = clock();
    bubblesort(a, n);
    end = clock();
    cout << "Bubble Sort Time: " << end - start << " ms" << endl;

    // Built-in Sort for merge sort
    start = clock();
    sort(b, b + n);
    end = clock();
    cout << "Built-in Sort Time: " << end - start << " ms" << endl;

    return 0;
}

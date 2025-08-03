#include <iostream>
using namespace std;

void generatePairs(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++){
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        }
        cout << endl;
    }
    return;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    generatePairs(arr, n);
    return 0;
}
#include <iostream>
using namespace std;  

// time : n^2.const ~ O(n^2)
// space : O(1) ~ O(1)

int targetSumPairs(int arr[], int n, int target) {
    int count = 0; 
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++){
            // cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            int sum = arr[i] + arr[j];
            if(sum == target) {
                // you've found a pair 
                count++;
            }
        }
        cout << endl;
    }
    return count;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 60;
    cout << targetSumPairs(arr, n, target) << endl;
    return 0;
}
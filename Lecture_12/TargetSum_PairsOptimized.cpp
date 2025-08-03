#include <iostream> 
using namespace std; 

// time : O(n) ~ O(n)
// space : O(1) ~ O(1)

int targetSumPairsOptimised(int arr[], int n, int target) {
    int count = 0; 
    int i = 0, j = n - 1;
    while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == target) {
            // you've found a pair 
            count++;
            i++;
            j--;
        } else if(sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return count;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 60;
    cout << targetSumPairsOptimised(arr, n, target) << endl;
    return 0;
}
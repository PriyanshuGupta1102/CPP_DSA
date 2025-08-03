#include <iostream> 

using namespace std;

// time : O(n)
// space : O(n) due to x[]

int maximumSubarraySumUsingKadanes(int nums[], int n) {
    int x[100];
    x[0] = nums[0];
    int maxSoFar = x[0];

    for(int i = 1; i < n; i++) {
        x[i] = max(x[i - 1] * nums[i], nums[i]);
        maxSoFar = max(maxSoFar, x[i]);
    }
    return maxSoFar;
}
int maximumSubarraySumUsingKadanesOptimized(int nums[], int n) { 
    int x;
    x = nums[0];
    int maxSoFar = x;

    for(int i = 1; i < n; i++) {
        x = max(x * nums[i], nums[i]);
        maxSoFar = max(maxSoFar, x);
    }
    return maxSoFar;
}
int main() {
    // int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // int arr[] = {-3, 2, -1, 4, -5};
    int nums[] = {2,3,-2,4};
    int n = sizeof(nums) / sizeof(int);

    cout << maximumSubarraySumUsingKadanes(nums, n) << endl; 

    cout << maximumSubarraySumUsingKadanesOptimized(nums, n) << endl;
    
    return 0;
}
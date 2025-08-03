// constraints : n <= 100
#include <iostream>
#include <climits>
using namespace std;
// time : n.const + n^2.const ~ O(n^2)
// space : O(n) due to psum[]
int maximumSubArraySumoptimized(int arr[], int n) {
    int psum[101];
    psum[0] = 0;
    for(int i = 1; i <= n; i++) {
        psum[i] = psum[i - 1] + arr[i - 1];
    }
    // for(int i = 0; i <= n; i++) {
    //     cout << psum[i] << " ";
    // } 
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        { int sum = psum[j + 1] - psum[i];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
int main() {
    int arr[]  = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << maximumSubArraySumoptimized(arr, n) << endl;



    return 0;
}
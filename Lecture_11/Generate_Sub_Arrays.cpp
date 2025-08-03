#include <iostream>
using namespace std;
// time: O(n^3)
void generateSubArrays(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            //generate the subarray that starts at 
            // the ith index and ends at the jth index
            cout << i << j << " : ";
            for(int k = i; k <=j; k++) {
                cout << arr[k] << " ";
            } 
            cout << endl;
        }
        cout << endl;
        // The above code generates all subarrays
    }
}
int main() {
    int arrr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arrr) / sizeof(int);

    generateSubArrays(arrr, n);
    return 0;
}
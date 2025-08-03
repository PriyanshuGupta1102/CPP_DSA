#include <iostream>
using namespace std; 

int binarySearch(int arr[], int n, int t) {
    int s = 0;
    int e = n - 1;

    while(s <= e) {
        int m = (s+e) / 2;
        if(arr[m] == t) {
            // cout << "Element found at index: " << m << endl;
            return m;
        }
        else if(arr[m] < t) {
            s = m + 1; // search in the right half
        }
        else {
            e = m - 1; // search in the left half
        }
    }
    return -1; // element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    int t = 20;

    cout << binarySearch(arr, n, t) << endl;

    return 0; // O(log n) time complexity for Worst case 
}
#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

	int n = sizeof(arr) / sizeof(int);
    int k = 3;
    
    for(int j = 0; j < k; j++) {
        for(int i = n-1; i >= 1; i--) {
            swap(arr[i], arr[i-1]);
        } // Rotate the array by swapping elements
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element of the rotated array
    }

    cout << endl; // Print a newline for better readability
    return 0;

}
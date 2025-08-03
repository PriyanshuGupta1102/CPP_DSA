#include<iostream>
using namespace std;
// HomeWork Question: Find the three largest elements in an array.
// This program finds the three largest elements in an array of integers.
int main() {
    int arr[100];
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the array
    }

    int largest1 = INT_MIN;
    int largest2 = INT_MIN;
    int largest3 = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest1) {
            largest3 = largest2;
            largest2 = largest1;
            largest1 = arr[i];
        } else if(arr[i] > largest2 && arr[i] != largest1) {
            largest3 = largest2;
            largest2 = arr[i];
        } else if(arr[i] > largest3 && arr[i] != largest1 && arr[i] != largest2) {
            largest3 = arr[i];
        }
    }
    
    cout << "The three largest elements are: " << largest1 << ", " << largest2 << ", " << largest3 << endl; // Print the three largest elements
    cout << "The largest element is: " << largest1 << endl; // Print the largest element


    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int arr[100];
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the array
    }

    int target;
    cout << "Enter the target element to find its last occurrence: ";
    cin >> target; // Input the target element to find
    
    int i;
    for(int i = n-1; i > 0; i--) {
        if(arr[i] == target) { // Check if the current element matches the target
            cout << "Last occurrence of " << target << " is at index: " << i << endl; // Print the index of the last occurrence
            return 0; // Exit the program after finding the Last occurrence
        }
    } 

    if(i == n) {
        cout << target << "not found in the array." << endl; // Print if the target is not found in the array
    }
}
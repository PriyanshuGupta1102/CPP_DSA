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
    cout << "Enter the target element to find its All occurrence: ";
    cin >> target; // Input the target element to find
    
    int i;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) { // Check if the current element matches the target
            cout << "Occurrence of " << target << " is at index: " << i << endl; // Print the index of the All occurrence
        }
    } 

    if(i == n) {
        cout << target << "not found in the array." << endl; // Print if the target is not found in the array
    }
    return 0; 
}
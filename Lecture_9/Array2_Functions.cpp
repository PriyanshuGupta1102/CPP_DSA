#include<iostream>
using namespace std;

int computeSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i < n; i++){
        arr[i]++;
    }
    return sum; // Return the sum of the array elements.
    // cout << "Sum of the array elements: " << sum << endl; // Print the sum of the array elements.
}

int main(){
    int arr[]={1,2,3,4,5}; // Array Declaration and Initialization
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array
    for(int i=0; i < n; i++){
        cout << arr[i] << " "; // Print each element of the array.
    }
    cout << endl; // Print a newline after printing all elements.

    computeSum(arr,n); // Call the function to compute the sum of the array elements.
    for(int i=0; i < n; i++){
        cout << arr[i] << " "; // Print each element of the array after calling computeSum.
    }
    
} 
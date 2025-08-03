#include<iostream>
using namespace std;

int computeSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i < n; i++){
        sum += arr[i];
    }
    return sum; // Return the sum of the array elements.
    // cout << "Sum of the array elements: " << sum << endl; // Print the sum of the array elements.
}
int main(){
    int arr[]={1,2,3,4,5}; // Array Declaration and Initialization
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array
    cout << computeSum(arr,n) << endl;
}
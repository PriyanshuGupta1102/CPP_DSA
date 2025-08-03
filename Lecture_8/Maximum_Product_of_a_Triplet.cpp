#include<iostream>
using namespace std;
// HomeWork Question: Find the maximum product of a triplet in an array.
// This program finds the maximum product of a triplet in an array of integers.
int main()  {
    int arr[5] = {20, 2, 50, 15, 10}; // Initialize the array with 5 elements
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int maxProduct = INT_MIN; // Initialize maxProduct to the smallest integer value

    // int n;
    // cout << "Enter the number  of elements in the array: ";
    // cin >> n;
    
    // for(int i = 0; i < n; i++) {
    //     cin >> arr[i]; // Input elements into the array
    // }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                int product = arr[i] * arr[j] * arr[k]; // Calculate the product of the triplet
                if(product > maxProduct) {
                    maxProduct = product; // Update maxProduct if a larger product is found
                }
            }
        }
    }
    cout << "The maximum product of a triplet is: " << maxProduct << endl; // Print the maximum product of a triplet
    return 0; // Return 0 to indicate successful completion of the program
    // return 0; // Return 0 to indicate successful completion of the program   

}
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for(int i = 1; i <= n-1; i++) {
        int key = arr[i]; 

        //in the ith pass, insert the key to its correct position
        // in the sorted part of the array

        int j = i - 1; // start from the last element of the sorted part
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // shift the element to the right
            j--; // move to the previous element
        }
        arr[j + 1] = key; // insert the key at its correct position 
    }

}

int main() {
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl; // O(n^2) time complexity for Worst case 
    return 0;
}
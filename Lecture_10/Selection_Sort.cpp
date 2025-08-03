#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    // in the ith, place the smallest element in the unsorted
    // part of the arr[] to its correct position
    // i.e. ith index
    for (int i = 0; i <= n - 2; i++)
    {
        int minIndex = i; // assume the first element is the minimum 
        for (int j = i + 1; j <= n - 1; j++) // iterate through the unsorted part of the array
        // find the minimum element in the unsorted part
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // update minIndex if a smaller element is found
            }
        }
        swap(arr[i], arr[minIndex]); // swap the found minimum element with the first element
    }
}

int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl; // O(n^2) time complexity for Worst case 

    return 0;
}
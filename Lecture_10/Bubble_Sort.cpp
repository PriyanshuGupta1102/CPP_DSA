#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // in the ith, place the largest element in the unsorted
    // part of the arr[] to its correct position

    for (int i = 1; i <= n - 1; i++)
    {   bool flag = false; // to check if any swap happened

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true; // if swap happens, then set flag to true
            }
        }
        if(flag == false) {
            break;
        }
    }
}
int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl; // O(n^2) time complexity for Worst case 

    return 0;
}
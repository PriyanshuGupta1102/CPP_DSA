// constraints : n <= 100
#include <iostream> 
using namespace std;

void merge(int arr[], int s, int m, int e){
    int temp[100];

    int i = s;
    int j = m + 1;
    int k = 0;

    while(i <= m && j<=e){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= m){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= e){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int i = s; i < e; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int s, int e){
    // Base Case

    if(s == e){
        // Sort arr[s....s] / arr[e....e]
        return;
    }

    // Recursive Case

    // Sort arr[s....e]

    // 1. Divide the arr[s....e] around the midPoint

    int m = s + (e - s) / 2;

    mergeSort(arr, s, m);
    mergeSort(arr, m+1, e);

    merge(arr, s, m, e);
}

int main() {
    int arr[] = {10,40,30,20,60,50};
    int n = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
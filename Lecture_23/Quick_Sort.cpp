#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){

    // Partition arr[s....e] around the pivot

    int low = s;
    int mid = s;

    int pivot = arr[e];

    while(mid < e){
        if(arr[mid] < pivot){
            // Put arr[mid] in left Partition
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else{
            // Put arr[mid] in right Partition
            mid++;
        }
    }

    // Put the Pivot i.e. arr[e] b/w the left and right partition
    swap(arr[e], arr[low]);

    return low;
}

void quickSort(int arr[], int s, int e){
    // Base Case

    if(s == e){ // Optional Base Case
        return; 
    }

    if(s > e) { // Mandatory Base Case
        return;
    }

    // Recursive Case

    // f(s, e) = sort arr[s....e] using quickSort Algorithm

    // 1. Partition the arr[s....e] around the Pivot i.e. arr[e]

    int pidx = partition(arr, s, e);

    // 2. Sort the left and right Partition of arr

    quickSort(arr, s, pidx - 1);
    quickSort(arr, pidx + 1, e);
}

int main() {
    int arr[] = {10,40,30,20,60,50};
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
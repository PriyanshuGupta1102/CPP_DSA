#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// [HW] try to implement heapify iteratively

void heapify(vector<int>& v, int n, int i){ // Fixes the heap Property at the node corr. to idx i
        int minIdx = i;

        int leftChildIdx = 2 * i + 1;
        if(leftChildIdx < v.size() && v[leftChildIdx] > v[minIdx]){
            minIdx = leftChildIdx;
        }

        int rightChildIdx = 2 * i + 2;
        if(rightChildIdx < v.size() && v[rightChildIdx] > v[minIdx]){
            minIdx = rightChildIdx;
        }

        if(minIdx != i){
            swap(v[i], v[minIdx]);
            heapify(v, n, minIdx);
        }

    }

int main(){

    vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};
    int n = v.size();

    // time : O(n)

    // iterate from leaf to root and invoke heapify
    // to transform the array into a heap

    for(int i = n - 1; i >= 0; i--){
        heapify(v, n, i);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

}
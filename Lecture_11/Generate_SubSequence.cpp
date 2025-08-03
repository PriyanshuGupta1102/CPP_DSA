#include <iostream>
using namespace std;
// time: O(n^3)
void generateSubSequences(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) { 
            //generate the subSequence that starts at 
            // the ith index and ends at the jth index
            // cout << i << j << " : ";
            if(i <= j){
                for(int k = i; k <=j; k++) {
                cout << arr[k] << " ";
            } 
            cout << endl;
        }
    
        // The above code generates all subarrays
    }
}
}
int main() { 
    int arr[] = {10, 20, 30};  
    int n = sizeof(arr) / sizeof(int);

    generateSubSequences(arr, n);
    return 0;
}
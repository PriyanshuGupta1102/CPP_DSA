#include <iostream>
#include <algorithm> 
using namespace std;
// time : O(mlogn)

bool isPresent(int arr[][3], int m, int n, int target) {
    for(int i = 0; i < m; i++) {
        // apply binary search to search for 'target' in the ith row
        if(binary_search(arr[i], arr[i] + n, target)){
            // you've found the 'target' in the ith row 
            return true;
        }
    }
    // 'target' is not found 
    return false;
}  

int main() {
    int arr[3][3] = {{50,80,20}, {90,10,70}, {60,30,40}};
    int m,n = 3;

    int target = 100;


   cout << isPresent(arr, m, n, target)? cout << "True" : cout << "False" << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    
    int i = 0;
    int j = n - 1;
    
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    
    int i = n - 1;
    
    while(i >= 1){
        swap(arr[i], arr[i-1]);
        i--;
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}
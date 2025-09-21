#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[5] = {10, 20, 30, 10, 20};
    int n = sizeof(arr) / sizeof(int);
    
    int t = 20;
    int cntr = 0; // To track the number of Occurrences 
    // We can also use flag instead of this cntr variable
    
    for(int i = 0; i < n; i++){
        if(arr[i] == t){
            cout << t << " found at index " << i << endl;
            cntr++;
        }
    }
    
    if(cntr == 0){
        cout << "-1" << endl;
    }

    return 0;
}
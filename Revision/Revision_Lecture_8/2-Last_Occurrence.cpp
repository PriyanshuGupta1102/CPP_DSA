#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[5] = {10, 20, 30, 20, 50};
    int n = sizeof(arr) / sizeof(int);
    
    int t = 20;
    bool flag = false;
    
    int index;
    
    for(int i = n; i >= 0; i--){
        if(arr[i] == t){
            flag = true;
            index = i;
            break;
        }
    }
    
    if(flag){
        cout << index << endl;
    }else{
        cout << "-1" << endl;
    }

    return 0;
}
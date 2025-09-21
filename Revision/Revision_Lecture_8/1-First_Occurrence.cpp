#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    
    int t = 20;
    bool flag = false;
    int index;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == t){
            flag = true;
            index = i;
            break;
        }
    }
    
    if(flag){
        cout << index << endl;
    }else{
        cout << "0" << endl;
    }

    return 0;
}
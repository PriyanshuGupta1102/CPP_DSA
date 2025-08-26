#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    bool flag = true;
    
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }
    
    if(flag) {
        cout << n << " is a Prime Number";
    }else{
        cout << n << " is not a Prime Number";
    }

    return 0;
}


#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;
    
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << j << " ";
        }
        
        for(int j = 1; j <= 2 * (i - 1) + 1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
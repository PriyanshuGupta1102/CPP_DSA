#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        
        for(int j = 1; j <= n - i - 1; j++){
            cout << "  ";
        }
        
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        
        for(int j = i; j >= 1; j--){
            if(j == n){
                continue;
            }
            cout << j << " ";
        }
        
        cout << endl;
    }

    return 0;
}
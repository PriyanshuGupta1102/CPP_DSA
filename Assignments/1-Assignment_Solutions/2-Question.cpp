#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;
    
    for(int i = 1; i <= n; i++){
        // To Print the Spaces n - i times in each row
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        
        int num = i;
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        
        num -= 2;
        for(int j = 1; j <= i - 1; j++){
            cout << num << " ";
            num--;
        }
        
        cout << endl;
    }

    return 0;
}
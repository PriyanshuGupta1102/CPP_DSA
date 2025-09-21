#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;
    
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= n - i + 1; j++){
            cout << ch;
            ch++;
        }
        
        for(int j = 1; j <= n - i + 1; j++){
            ch--;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;
    int a = 0;
    int b = 1;
    int c;
    
    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i; j++){
           cout << a << "  ";
           c = a + b;
           a = b;
           b = c;
        }
        cout << endl;
    }

    return 0;
}
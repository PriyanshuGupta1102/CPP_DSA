#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 9;
    for(int i = 1; i <= (n / 2) + 1; i++){
        for(int j = 1; j <= (n / 2) - i + 1; j++){
            cout << "  ";
        }
        
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        
        for(int j = 1; j <= i - 1; j++){
            cout << "* ";
        }
        cout << endl;
        
    }
    
    for(int i = 1; i <= (n / 2); i++){
        for(int j = 1; j <= i; j++){
            cout << "  ";
        }
        
        for(int j = 1; j <= (n / 2) - i + 1; j++){
            cout << "* ";
        }
        
        for(int j = 1; j <= (n / 2) - i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
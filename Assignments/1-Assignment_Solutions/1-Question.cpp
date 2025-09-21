#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 7;
    
    for(int i = 1; i <= n; i++){
        // To Print the Numbers ith time in each row
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        
        // To Print the Stars n-i times in each row
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}
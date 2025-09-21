#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;
    int cnt = 1;
    
    for(int i = 1; i <= n; i++){
        // To Print the numbers in ith times in each row 
        for(int j = 1; j <= i; j++){
            cout << cnt << "  ";
            cnt++;
        }
        cout << endl;
    }

    return 0;
}
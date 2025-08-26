#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n = 5;
     for(int i = 0; i < n; i++){
         for(int j = 1; j <= i; j++){
             cout << "    ";
         }
         
         for(int j = 1; j <= n-i; j++){
             cout << "* ";
         }
         
         cout << endl;
     }
    return 0;
}
#include <iostream>
using namespace std; 

void f(int n) {

    // Base Case 
    if(n == 0) {

        return; // mandatory
    }
    

    // Recursive Case

    // f(n) = print nos. from 1 to n in inc. order

    // 1. ask your friend to print nos. from 1 to n - 1 in inc. order

    f(n - 1);

    cout << n << " ";

    return; // optional
    
}

int main() {
    int n = 10;

    f(n);


    return 0;
}
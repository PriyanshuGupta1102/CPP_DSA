#include <iostream>
using namespace std; 

int f(int n) {

    // base case ----> It is Mandatory (Very Important)

    // if(n == 0) {

    //     // f(0) = find the 0th Fib. no.

    //     return 0;
    // }

    // if(n == 1) {

    //     // f(1) = find the 1th Fib. no.

    //     return 1;
    // }

     if(n == 0 || n == 1) {

        return n;
    }

    // recursive case 

    // f(n) = find the nth Fib. no.

    // 1. ask your friend to find n-1th Fib. no.

    int A = f(n - 1);

    // 2. ask your friend to find n-2th Fib. no.

    int B = f(n - 2);

    return A + B;
}

int main() {
    int n = 6;

    cout << f(n) << endl;


    return 0;
}
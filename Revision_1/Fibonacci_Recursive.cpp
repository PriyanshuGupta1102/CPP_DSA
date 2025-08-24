#include <iostream>
using namespace std;

int fib(int n){

    //Base Case
    if(n == 0 || n == 1){
        return n;
    }

    // Recursive Case
    int A = fib(n-1); 
    int B = fib(n-2);

    return A + B;
}

int main() {
    int n = 4;

    cout << fib(n) << endl;

    return 0;
}
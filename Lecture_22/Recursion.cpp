#include <iostream>
using namespace std; 

// time : Recursive Calls * Time Spend in Each Call ----> O(n)
// space : (n + 1)*Const ----> O(n) due to Function Call Stack 

int f(int n) {

    // base case ----> It is Mandatory (Very Important)

    if(n == 0) {

        // f(0) = find 0!

        return 1;
    }

    // recursive case 

    // f(n) = find n!

    // 1. ask your friend to find n-1!

    int A = f(n - 1);

    return n * A;
}

int main() {
    int n = 4;

    cout << f(n) << endl;


    return 0;
}
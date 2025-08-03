#include <iostream>
using namespace std; 

// time : O(log y)
// space : O(log y)

int f(int x, int y) {

    // Base Case 

    if(y == 0) {

        // f(x, 0) = find pow(x, 0) i.e. mul. x, 0 times 

        return 1;
    }

    // Recursive Case

    // f(x, y) = find pow(x, y)

    // 1. ask your friend to find pow(x, y/2) 

    int A = f(x, y / 2); // saving result of recursie call here is mandatory to Optimize

    if(y % 2 == 0) {
        // y is even
        return A * A;
    } else {
        // y is odd
        return x * A * A;
    }
    
}

int main() {
    int x = 4;
    int y = 3;

    cout << f(x, y) << endl;


    return 0;
}
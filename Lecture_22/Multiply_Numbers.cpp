#include <iostream>
using namespace std; 

// time : O(y)
// space : O(y)

int f(int x, int y) {

    // Base Case 

    if(y == 0) {
        return 0;
    }

    // Recursive Case

    int A = f(x, y-1);

    return x + A;
    
}

int main() {
    int x = 3;
    int y = 4;

    cout << f(x, y) << endl;


    return 0;
}
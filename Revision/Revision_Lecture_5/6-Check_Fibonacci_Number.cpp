#include <iostream>
using namespace std;

bool isFibonacci(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n) return true;
        int c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int N;
    cout << "Enter number: ";
    cin >> N;

    if (isFibonacci(N))
        cout << "true";
    else
        cout << "false";

    return 0;
}

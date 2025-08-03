#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;
    
    // allocate memory for 1D array with custom size on the Heap
    int* ptr = new int[n];

    // *ptr = 10;
    // *(ptr + 1) = 20;
    // *(ptr + 2) = 30;
    // *(ptr + 3) = 40;
    // *(ptr + 4) = 50;

    // ptr[0] = 10;
    // ptr[1] = 20;
    // ptr[2] = 30;
    // ptr[3] = 40;
    // ptr[4] = 50;

    for(int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }

    cout << endl;

    // deallocate memory for 1D Array

    delete [] ptr;

    return 0;
}
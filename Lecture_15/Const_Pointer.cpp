#include <iostream>
using namespace std;
int main() { 
    int x = 10;
    const int *ptr1 = &x;
    const int *ptr2 = &x;
    int * const ptr3 = &x;
    const int * const ptr4 = &x; 
    
}
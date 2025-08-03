#include<iostream>
using namespace std;

void myswap(int &x, int &y){
    
    int temp = x; // Swap the values of x and y using a temporary variable.
    x = y; // Assign the value of y to x.
    y = temp; // Assign the value of temp (original x) to y.
    // cout << "Inside myswap() function: " << x << " " << y << endl; // Print the swapped values of x and y.
    return; // Return statement and it is optional in C++.  
}
int main(){
    int a = 10; // Variable Declaration and Initialization
    int b = 11; // Reference Variable Declaration and Initialization
    cout << a << " " << b << endl; // Print the value of a and b
    myswap(a, b); 
    cout << a << " " << b << endl; // Print the value of a and b after swapping
    return 0;
} 
// This program demonstrates the use of reference variables and function to swap two numbers. 
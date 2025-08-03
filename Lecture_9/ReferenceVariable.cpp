#include<iostream>
using namespace std;
int main(){
    int a = 10; // Variable Declaration and Initialization
    int &b = a; // Reference Variable Declaration and Initialization
    cout << "Value of a: " << a << endl; // Print the value of a
    cout << "Value of b: " << b << endl; // Print the value of b (which is a reference to a)
    b++; // Change the value of b (which also changes the value of a)
    cout << "Value of a after Increment b: " << a << endl; // Print the value of a after changing b
    cout << "Value of b after Increment b: " << b << endl; // Print the value of b after changing b
    return 0;
} 
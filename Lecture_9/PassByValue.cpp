#include<iostream>
using namespace std;

void incr(int n){ // Function Definition and int n is Formal Parameter or Parameter here
    n++; // Increment the value of n by 1.
    cout << "Inside incr() function: " << n << endl; // Print the incremented value of n.
    return; // Return statement and it is optional in C++.
}
int main(){
    int a = 10;
    incr(a); 
    cout << "Inside main() function: " << a << endl; // Print the value of a after calling incr() function.
    // The value of a remains unchanged because it is passed by value.
}
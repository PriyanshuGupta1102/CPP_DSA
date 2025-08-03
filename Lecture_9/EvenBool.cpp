#include<iostream>
using namespace std;

bool isEven(int n){ // Function Definition and int n is Formal Parameter or Parameter here
    // if(n%2==0){
    //     return true; // Return true if n is even.
    // } else {
    //     return false; // Return false if n is odd.
    // }
    return n%2==0; // Return true if n is even, false if n is odd. 
    
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // bool Even = isEven(n); // Function call / Function Invocation and n is Actual Parameter or Argument here. 
    // cout << Even << endl; // Print the boolean value returned by isEven function. 
    // cout << isEven(n) << endl; // Print the boolean value returned by isEven function.
    isEven(n) ? cout << n << " is even." : cout << n << " is odd."; // Ternary operator to print whether n is even or odd. 
    
    return 0;
}
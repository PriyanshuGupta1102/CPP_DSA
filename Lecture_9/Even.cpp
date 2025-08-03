#include<iostream>
using namespace std;

void isEven(int n){ // Function Definition and int n is Formal Parameter or Parameter here
    if(n%2==0){
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }
    return; // Return statement and it is optional in C++.
    // return 0; // This is not required in void functions.
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    isEven(n); // Function call / Function Invocation and n is Actual Parameter or Argument here. 
    return 0;
}
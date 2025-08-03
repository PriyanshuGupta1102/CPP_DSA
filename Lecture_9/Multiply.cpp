#include<iostream>
using namespace std;

int Multiply(int n, int m){ 
    //return n*m; // Function Definition and int n is Formal Parameter or Parameter here
    int c = n*m; // Function Definition and int n is Formal Parameter or Parameter here
    return c; // Function Definition and int n is Formal Parameter or Parameter here
    
}
int main(){ 
   int a = 10, b = 20;  
    cout << Multiply(a, b) << endl; // Function call / Function Invocation and n is Actual Parameter or Argument here.
    cout << Multiply(5, 6) + 100; // Function call / Function Invocation and n is Actual Parameter or Argument here.
    return 0;
} 
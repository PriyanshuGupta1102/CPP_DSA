#include <iostream>
using namespace std; 

void f(int n, char out[], int i, int oc, int cc){
    // Base Case
    if(i == 2 * n){ // oc < n && cc < n 
        out[i] = '\0';
        cout << out << endl;
        return; 
    }

    // Recursive Case
    
    // f(i, oc, cc) = take decisions for the remaining positions i to 2n-1 s.t. oc '('and ')' are already used

    // decide for the ith positions

    // option 1 : use '('

    if(oc < n) {
        out[i] = '(';
        f(n,out,i+1,oc+1,cc);
    }

    // options 2 : use ')'
    if(cc < n) {
        out[i] = ')';
        f(n,out,i+1,oc, cc+1);
    }
}

int main() {
    int n = 2;

    char out[17]; //  based on constraints 
    
    f(n, out, 0, 0, 0);

    return 0;
}
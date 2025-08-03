#include <iostream>
using namespace std;

void f(char inp[], char out[], int i, int j){
    // Base Case
    if(inp[i] == '\0'){ // i == n
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // Recursive Case
    // f(i,j) = it is a fn that generates subsequences for inp[i....n-1] s.t. the next free index in the out[] 
    // is index j

    // decide for inp[i]

    out[j] = inp[i];
    f(inp, out, i+1, j+1);

    f(inp, out, i+1,j);
}

int main() {
    char inp[] = "abc";
    char out[10]; // based on constraints
    
    f(inp, out, 0,0);

    return 0;
}
#include <iostream>
using namespace std; 

void f(char inp[], int i){

    // Base Case
    if(inp[i] == '\0'){
        return;
    }

    // Recursive Case

    // f(i) = A fn that replaces all the "pi" with "3.14"
    // in the inp[i....n-1]

    if(inp[i] == 'p' && inp[i+1] == 'i'){

        // 1. Replace "pi" at the i,i+1th index with "3.14"

        int j = i+2;
        while(inp[j] != '\0'){
            j++;
        }

        while(j >= i+2) {
            inp[j + 2] = inp[j];
            j--;
        }

        // 1.a. Shift all the characters starting from index i+2 two-steps fwd

        inp[i] = '3';
        inp[i+1] = '.';
        inp[i+2] = '1';
        inp[i+3] = '4';

        f(inp, i+4);
    }else {
        f(inp, i+1);
    }
}

int main() {
    char inp[20] = "pip";

    f(inp, 0);

    cout << inp << endl; //3.14p

    return 0;
}
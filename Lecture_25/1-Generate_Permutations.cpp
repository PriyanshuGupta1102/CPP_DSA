#include <iostream>
#include <cstring>
using namespace std; 

void f(char inp[], int n, int i){
    // Base Case

    if(inp[i] == '\0'){ // i == n
        cout << inp << endl;
        return;
    }

    // Recursive Case

    // f(i) = take decisions for indices i to n-1

    // Decide for the ith index

    for(int j = i; j <= n - 1; j++){
        swap(inp[i], inp[j]);
        f(inp, n, i + 1);
        swap(inp[i], inp[j]); // Backtracting 
    }
}

int main() {
    char inp[] = "abc";
    int n = strlen(inp);

    f(inp, n, 0);

    return 0;
}
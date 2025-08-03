#include <iostream>
#include <set> 
using namespace std;

void f(char inp[], char out[], int i, int j, set<string>& s){
    // Base Case
    if(inp[i] == '\0'){ // i == n
        out[j] = '\0';
        // cout << out << endl;
        string outStr(out); // we are init a string obj using a char array
        s.insert(outStr);
        // s.insert(string(out));
        return;
    }

    // Recursive Case
    // f(i,j) = it is a fn that generates subsequences for inp[i....n-1] s.t. the next free index in the out[] 
    // is index j

    // decide for inp[i]

    out[j] = inp[i];
    f(inp, out, i+1, j+1, s);

    f(inp, out, i+1,j, s);
} 

int main() {
    char inp[] = "abc";
    char out[10]; // based on constraints

    set<string> s;
    
    f(inp, out, 0,0, s);

    for(string subseq : s){
        cout << subseq << endl;
    }

    cout << endl;

    return 0;
}
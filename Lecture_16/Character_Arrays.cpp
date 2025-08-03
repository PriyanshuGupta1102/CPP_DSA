#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str[101];

    cin >> str;
    // cin >> stops reading input as soon as it encounters 
    // a non-leading whitespace character 

    // cin ignores leading whitespace character
    
    cout << str << endl;

    cout << strlen(str) << endl;

    // cout << sizeof(str) / sizeof(char) << endl; // This gives the size of the array, not the length of the string

    return 0;


}
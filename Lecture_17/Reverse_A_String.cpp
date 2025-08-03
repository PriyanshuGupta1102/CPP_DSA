#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "abcde";

    // Reversing a String  
    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
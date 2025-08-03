#include <iostream>
#include <cstring> // For strlen
#include <algorithm> // For reverse
using namespace std;

int findLength(char str3[]) {
    int cnt = 0; 
    for(int i = 0; str3[i] != '\0'; i++) {
        cnt++;
    }

    return cnt;
}

int main() {
    char str1[] = {'a', 'b', 'c', 'd', 'e', '\0'}; // Null-terminated string
    cout << str1 << endl;

    char str2[] = "abcde"; // '\0' is added automatically when you init char[] with strig literal
    cout << str2 << endl;

    char str3[] = "coding";

    cout << str3[0] << endl; // c
    cout << str3[1] << endl; // o
    cout << str3[2] << endl; // d
    cout << str3[3] << endl; // i
    cout << str3[4] << endl; // n
    cout << str3[5] << endl; // g

    cout << endl;

    for(int i = 0; str3[i] != '\0'; i++) {
        cout << str3[i] << endl; // Prints each character in the string
    }
    cout << endl;

    cout << strlen(str3) << endl; // Prints the length of the string (excluding '\0')

    cout << endl;

    cout << findLength(str3) << endl;

    // Reverse a String by using reverse() or strrev() Built in Function
    char str6[] = "codings";
    int m = strlen(str6);

    reverse(str6 + 1, str6 + 5); // Reverse the substring from index 1 to 4 (inclusive)
    cout << str6 << endl; // Output: "cgnidos"
    
    cout << endl;

    return 0;
 }
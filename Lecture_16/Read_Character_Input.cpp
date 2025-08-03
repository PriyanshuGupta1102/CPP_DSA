#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str[101]; // Based on Constraints

    cin.getline(str, 101, '$');

    cin.getline(str, 5, '$');

    cin.getline(str, 101); // '\n' is the defaut delimiting Character 

    cout << str << endl;

    //[HW] think of a way we can ignore the leading whitespace characters while reading the input

    return 0;

}
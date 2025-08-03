#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// time : min(len of str1, len of str2)

int stringCompare(char str1[], char str2[]) {
    int i = 0; 
    int j = 0;

    while(str1[i] != '\0' && str2[j] != '\0'){
    if(str1[i] == str2[j]){
        i++;
        j++;
    }else if(str1[i] > str2[j]){
        return 1;
    }else{
        // str1[i] < str2[j]
        // str1 < str2
        return -1;
    }
    }

    if(str1[i] == '\0' && str2[j] == '\0') {
        return 0; // Both strings are equal
    } else if(str1[i] != '\0') {
        return 1; // str1 is less than str2
    } else {
        // str2[j] == '\0'
        return -1; // str1 is greater than str2
    }
}

int main()  {
    char str1[] = "aec";
    char str2[] = "abc";

    // int ans = stringCompare(str1, str2);
    int ans = strcmp(str1, str2); // Using built-in function to compare strings

    cout << ans << endl;

    if(ans == 0) {
        cout << str1 << " is equal to " << str2 << endl;
    }else if(ans > 0 ) {
        cout << str1 << " > " << str2 << endl;
    }else {
        // ans < 0
        cout << str1 << " < " << str2 << endl;
    }

    return 0;
}
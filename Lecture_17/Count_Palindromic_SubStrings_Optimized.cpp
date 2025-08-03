#include <iostream>
#include <string>
using namespace std;

// time : O(n^2)
// space : O(1)

int countPalindromicSubstringsOptimized(const string& str){
    int n = str.size();
    int cnt = 0;

    // 1. find no. of odd-length palindromic substrings in str
    for(int i = 0; i < n; i++){
        int j = 0; 
        while(i - j >= 0 && i + j <= n - 1 && str[i - j] == str[i + j]){
            j++;
            cnt++;
        } 
    }

    // 2. find no. of even -length palindromic substrings in str
    for(double i = 0.5; i < n; i++){
        double j = 0.5; 
        while(i - j >= 0 && i + j <= n - 1 && str[i - j] == str[i + j]){
            j++;
            cnt++;
        } 
    }
}

int main() {
    string str = "abaaba";

    cout << countPalindromicSubstringsOptimized(str) << endl;

}

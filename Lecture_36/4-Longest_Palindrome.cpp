#include <iostream>
#include <set>
using namespace std;

// time : O(nlogn) ~ O(n) since we can have at max 52 char (a-z, A-Z)
// space : O(n) ~ O(1)

int longestPalindrome(const string& str){

    set<char> s;
    int ans = 0;

    for(char ch : str){
        if(s.find(ch) != s.end()){
            // ch is already in set<>
            ans += 2;
            s.erase(ch);
        }else {
            s.insert(ch);
        }
    }

    if(!s.empty()){
        ans++;
    }

    return ans;
}

int main() {
    string str = "abccccdd";

    cout << longestPalindrome(str) << endl;

    return 0;
}
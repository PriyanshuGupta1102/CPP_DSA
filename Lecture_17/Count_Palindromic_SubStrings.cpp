#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) 
{
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int countPalindromicSubstrings(const string& str){
    int n = str.size();
    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            string substring = str.substr(i, j - i + 1);
            if(isPalindrome(substring)){
                cnt++;
            }
        }
    }
}

int main() {
    string str = "abaaba";

    cout << countPalindromicSubstrings(str) << endl;

}

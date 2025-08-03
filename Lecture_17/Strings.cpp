#include <iostream>
#include <cstring>
using namespace std;

bool isGoodString(const string& str){
    
}

int longestGoodSubstring(const string& str){
    int maxsoFar = 0;
    int n = str.size();
    for(int i = 0; i <= n - 1; i++){
        for(int j = i; j <= n - 1; j++){
            string substring = str.substr(i, j - i + 1);
            if(isGoodString(substring)){
                maxsoFar = max(maxsoFar, j - i + 1);
            }
        }
    }
    return maxsoFar;
}

int main() {
    string str = "cbeicdeiou";

   cout <<  longestGoodSubstring(str);

    return 0;

}
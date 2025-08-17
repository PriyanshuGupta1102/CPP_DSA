#include <iostream>
#include <stack>
#include <string> 

using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(char ch : str){
            switch(ch) {
                case '(':
                case '[':
                case '{': s.push(ch); break;
                case ')': if(!s.empty() and s.top() == '(') s.pop(); else return false; break;
                case ']': if(!s.empty() and s.top() == '[') s.pop(); else return false; break;
                case '}': if(!s.empty() and s.top() == '{') s.pop(); else return false; break;
            }
        }
        return s.empty();
    }
};

int main() {
    string s = "({[]})";

    return 0;

}
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string plugin(string letters){
    stack<char> s;
    
    for(char x : letters){
        if(!s.empty()){
            if(s.top() == x){
                s.pop();
                continue;
            }
        }
        s.push(x);
    }
    string output = " ";

    while(!s.empty()){
        output += s.top();
        s.pop();
    }

    reverse(output.begin(), output.end());

    return output;
    
}

int main() {
    string letters;
    cin >> letters;

    cout << plugin(letters);

    return 0;
}
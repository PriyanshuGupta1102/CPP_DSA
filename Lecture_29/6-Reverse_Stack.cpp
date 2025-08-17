#include <iostream>
#include <stack> 

using namespace std;

void print(stack<int> s) {

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    cout << endl;
}

// int reverseStack(stack<int> s){

// }

void insertAtBottomRecursive(stack<int>& s, int val){

    // Base Case
    if(s.empty()){
        s.push(val);
        return;
    }

    // Recursive Case

    int t = s.top();
    s.pop();
    insertAtBottomRecursive(s, val);

    s.push(t);
}

// time : t(n) = t(n-1) + n.c ~ O(n^2)
// space : O(n) due to function call stack

void reverseStack(stack<int>& s){

    // Base Case
    if(s.empty()){
        return;
    }

    // Recursive Case

    int t = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottomRecursive(s, t);

    s.push(t);
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);

    // reverseStack(s);

    reverseStack(s);

    print(s);
    
    return 0;
}
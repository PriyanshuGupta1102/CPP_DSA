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

// int inertAtBottomLinear(stack<int> s, int val){

// }

// time : 3n + 1
// space : O(n)
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

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);

    int val = 0;

    // inertAtBottomLinear(s, val);

    insertAtBottomRecursive(s, val);

    print(s);
    
    return 0;
}
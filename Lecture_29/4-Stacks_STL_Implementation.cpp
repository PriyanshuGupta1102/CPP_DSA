#include <iostream>
#include <stack> 

using namespace std;

int main() {
    stack<int> s;
    // stack<int, vector<int>> s; It is Optional that u have to use Vector as they have use Deque Internally

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "size : " << s.size() << endl;
    // cout << "top : " << s.top() << endl;
    cout << "isEmpty ? " << s.empty() << endl;

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
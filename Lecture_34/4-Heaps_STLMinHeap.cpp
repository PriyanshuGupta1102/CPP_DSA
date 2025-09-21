#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> m; // now it acts as minHeap
    // greater<int> is the Built in Function Object known as Functor 

    m.push(1);
    m.push(2);
    m.push(3);
    m.push(4);
    m.push(5);
    m.push(6);
    m.push(7);
    m.push(8);
    m.push(9);

    cout << m.size() << endl; // 9

    while(!m.empty()){
        cout << m.top() << " ";
        m.pop();
    }

    cout << endl;

    cout << m.size() << endl; // 0

    return 0;
}
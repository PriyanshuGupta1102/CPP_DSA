#include <iostream>
#include <deque>aa

using namespace std;

template <typename T>
class stack{

    deque<T> d; // Internal Representation of Stack

    public :
        void push(T val){
            d.push_back(val);
        }

        void pop(){
            d.pop_back();
        }

        int size(){
            return d.size();
        }

        T top() {
            return d.back(); // v[v.size()-1]
        }

        bool empty() {
            return d.empty(); // v.size == 0
        }
};

int main() {
    stack<int> s;

    cout << "size : " << s.size() << endl;
    cout << "isEmpty ? " << s.empty() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "size : " << s.size() << endl;
    // cout << "top : " << s.top() << endl;
    cout << "isEmpty ? " << s.empty() << endl;

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
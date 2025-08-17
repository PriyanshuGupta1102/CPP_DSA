#include <iostream>
#include <vector> 

using namespace std;

template <typename T>
// template <typename T1,T2> We can also do this
class stack{
    vector<T> v; // Internal Representation of Stack
    // vector<T1> v1;
    // vector<T2> v2;

    public :
        void push(T val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int size(){
            return v.size();
        }

        T top() {
            return v.back(); // v[v.size()-1]
        }

        bool empty() {
            return v.empty(); // v.size == 0
        }
};

int main() {
    stack<int> s;
    // stack<string, int> s;

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
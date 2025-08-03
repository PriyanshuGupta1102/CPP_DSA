#include <iostream>
#include <set> 
using namespace std;

int main() {
    multiset<int> s; // vector<int> v;

    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1); // Ignored since set<> contains distinct elements 

    cout << "size : " << s.size() << endl; // 5

    for(int x : s){
        cout << x << " ";
    }

    cout << endl;

    s.erase(5); // since 5 exists in the set<>, it will be erased

    for(int x : s) {
        cout << x << " ";
    }

    cout << endl;

    auto it = s.begin();
    s.erase(it);

    cout << "size : " << s.size() << endl; // 3

    for(int x : s) {
        cout << x << " ";
    }

    cout << endl;

    it = s.begin();
    it = s.erase(it);

    cout << *it << endl;

    for(int x : s) {
        cout << x << " ";
    }

    cout << endl;

    if(s.find(3) != s.end()){
        cout << "3 is Present" << endl;
    }else {
        cout << "3 is Absent" << endl;
    }

    if(s.find(2) != s.end()){
        cout << "2 is Present" << endl;
    }else {
        cout << "2 is Absent" << endl;
    }

    if(s.count(5)) {
        cout << "5 is Present" << endl;
    }else {
        cout << "5 is Absent" << endl;
    }

    if(s.count(4)) {
        cout << "4 is Present" << endl;
    }else {
        cout << "4 is Absent" << endl;
    }

    return 0;
}
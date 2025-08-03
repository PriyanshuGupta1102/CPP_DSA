#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int, int> p1;

    p1.first = 10;
    p1.second = 20;

    cout << p1.first << " " << p1.second << endl;

    pair<string, int> p2 = {"Priyanshu", 24};

    cout << p2.first << " " << p2.second << endl;

    pair<char, int> p3 = make_pair('X', 0);

    
}
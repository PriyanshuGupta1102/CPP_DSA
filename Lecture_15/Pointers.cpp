#include<iostream>
using namespace std;
int main() {
    int x = 10;
    cout << "x = " << x << endl;
    cout << "sizeof(x) = " << sizeof(x) << "B" << endl; // size of x in bytes
    cout << "&x = " << &x << endl; // address of x
    cout << "sizeof(&x) = " << sizeof(&x) << "B" << endl; // size of address of x in bytes

    double y = 3.14;
    cout << "y = " << y << endl;
    cout << "sizeof(y) = " << sizeof(y) << "B" << endl; // size of y in bytes
    cout << "&y = " << &y << endl; // address of y
    cout << "sizeof(&y) = " << sizeof(&y) << "B" << endl; // size of address of y in bytes
    
    char ch = 'A';
    cout << "ch = " << ch << endl;
    cout << "sizeof(ch) = " << sizeof(ch) << "B" << endl; // size of ch in bytes
    cout << "&ch = " << &ch << endl; // address of ch
    cout << "sizeof(&ch) = " << sizeof(&ch) << "B" << endl; // size of address of ch in bytes

    cout << "------------------------" << endl;
    return 0;
}
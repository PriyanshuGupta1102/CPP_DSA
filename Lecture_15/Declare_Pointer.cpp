#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *xptr;
    xptr = &x;
    cout << "Value at xptr" << *xptr << endl; // dereferencing pointer to get value at address; 

    cout << x << endl;
    cout << sizeof(x) << endl;
    cout << &x << endl;
    cout << sizeof(&x) << endl;
    cout << xptr << endl; // address of x
    cout << sizeof(xptr) << endl;

    double y = 3.14;
    double *yptr;
    yptr = &y;
    cout << "y = " << y << endl;
    cout << "sizeof(y) = " << sizeof(y) << "B" << endl; // size of y in bytes
    cout << "&y = " << &y << endl; // address of y
    cout << "sizeof(&y) = " << sizeof(&y) << "B" << endl; // size of address of y in bytes
    cout << yptr << endl; // address of x
    cout << sizeof(yptr) << endl;
    
    char ch = 'A';
    char *chptr;
    chptr = &ch;
    cout << "ch = " << ch << endl;
    cout << "sizeof(ch) = " << sizeof(ch) << "B" << endl; // size of ch in bytes
    cout << "&ch = " << &ch << endl; // address of ch
    cout << "sizeof(&ch) = " << sizeof(&ch) << "B" << endl; // size of address of ch in bytes
    cout << chptr << endl; // address of x
    cout << sizeof(chptr) << endl;


    return 0;
}
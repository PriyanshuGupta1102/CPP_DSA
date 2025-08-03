#include <iostream>
using namespace std;

void greet() {
    cout << "namaste" << endl;
}

int add(int a, int b) {
    return a + b;
}

bool ascending(int a, int b) {
    return a > b; //Return true if a is greater than b
}
int main() {
    // cout << (void*)&greet << endl;
    // cout << (void*)&add << endl;
    // cout << (void*)&ascending << endl << endl;

    // cout << (void*)greet << endl;
    // cout << (void*)add << endl;
    // cout << (void*)ascending << endl;

    void (*gptr) () = &greet;
    int  (*aptr) (int, int) = &add;
    bool (*ascptr) (int, int) = &ascending;

    cout << (void*)gptr << endl;
    cout << (void*)aptr << endl;
    cout << (void*)ascptr << endl;

    cout << gptr << endl;
    cout << aptr << endl;
    cout << ascptr << endl;

    (*gptr)(); // Calling the function using the function pointer
    cout << (*aptr)(10, 20) << endl; // Calling the function    
    cout << (*ascptr)(101, 20) << endl; // Calling the function

    greet();
    cout << add(10, 20) << endl; // Calling the function
    cout << ascending(101, 20) << endl; // Calling the function

    //While Calling a Function using a Function Pointer is Optional 
    gptr();
    cout << ascptr(101, 20) << endl; // Calling the function using the function pointer
    cout << aptr(10, 20) << endl;

    (*greet)();
    cout << (*add)(10, 20) << endl; // Calling the function
    cout << (*ascending)(101, 20) << endl; // Calling the function

    return 0;

}
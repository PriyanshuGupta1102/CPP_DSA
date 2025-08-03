#include<iostream>
using namespace std;

int main(){
    int x = 10;
    const int &y = x; // y is a const reference to x, meaning y cannot be modified.
    cout << y << endl;
    x++;
    cout << x << endl;
    cout << y << endl; // y will reflect the updated value of x.
    //y++; // This line would cause a compilation error because y is a const reference.
    return 0;
} 
#include <iostream> 
using namespace std;

int main(){
    int x = 10;
    char* ptr1 = (char*)&x;
    cout << ptr1 << endl;

    char ch= 'A';
    int* ptr2 = (int*)&ch;
    cout << ptr2 << endl;

    int z = 10; // z is an integer variable
    char* ptr3 = (char*)&z;
    cout << (int)*ptr3 << endl; // dereferencing pointer to get value at address

    return 0;
}
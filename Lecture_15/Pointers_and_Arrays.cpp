#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int); 

    cout << arr << " " << &arr[0] << endl; 

    cout << *arr << " " << arr[0] << endl; 

    return 0;
}
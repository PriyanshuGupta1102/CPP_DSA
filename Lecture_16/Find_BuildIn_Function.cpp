#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
    int n = sizeof(arr) / sizeof(int);

    int key = 30;

    // 1) searching for a key in a sequence using find()

    auto it = find(arr, arr + n, key);
    if(it != arr + n) {
        cout << "Key found at index: " << it - arr << endl; // It gives us the address so we have to subtract the base address to get the index
    } else {
        cout << "Key not found" << endl;
    }

    key = 100; 

    it = find(arr, arr + n, key);
    cout << it << endl;
    cout << (arr + n) << endl;

    if(it == arr + n) {
        cout << key << " is not present in the array" << endl;
    }

    // 2) Counting the Occurences of key in a sequence using count()

    key = 30;
    // int count = count(arr, arr + n, key);
    cout << "Count of " << key << " is: " << count(arr, arr + n, key) << endl;

    return 0;
}
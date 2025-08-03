#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[] = {50, 40, 30, 30, 30, 20, 10, 10};
    int n = sizeof(arr) / sizeof(int);

    // 1) Finding the Minimum value in a Sequence 

    cout << *min_element(arr, arr + n) << endl; //It gives us te address so we have to dereference it to get the value

    // 2) Finding the Maximum Value in a Sequence 

    cout << *max_element(arr, arr + n) << endl;

    return 0;
}
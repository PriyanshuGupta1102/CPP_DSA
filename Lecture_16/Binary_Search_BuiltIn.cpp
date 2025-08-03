#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {10, 10, 20, 30, 30, 30, 40, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    int key = 50;

    // 1) Searching for a key in a sequence using binary_search() in O(logn) time complexity

    binary_search(arr, arr + n, key) ? cout << "Key found" << endl : cout << "Key not found" << endl;

    // 2) Finding Lower Bound for a key in a sorted sequence in a O(logn) using lower_bound()

    key = 30;

    auto it1 = lower_bound(arr, arr + n, key);
    cout << it1 << endl;
    cout << it1 - arr << endl;

    //  3) Finding Upper Bound for a key in a sorted sequence in a O(logn) using upper_bound()

    auto it2 = upper_bound(arr, arr + n, key);
    cout << it2 << endl;
    cout << it2 - arr << endl;

    // 4) Finding the number of occurrences of a key in a sorted sequence using lower_bound() and upper_bound()
    int count = it2 - it1; // Upper Bound - Lower Bound gives the count
    cout << "Count of " << key << " is: " << count << endl;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[] = {50, 20, 10, 30, 40};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n); // sorts arr[] in the range [0,n)

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    vector<int> v = {50, 20, 10, 30, 40};
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int brr[] = {500, 300, 400, 200, 100};
    int m = sizeof(brr) / sizeof(int);
    sort(brr + 1, brr + 4);

    for(int i = 0; i < m; i++) {
        cout << brr[i] << " ";
    }

    cout << endl;

    reverse(arr, arr + n); // reverses arr[] in the range [0,n)

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    reverse(v.begin(), v.end()); // reverses v in the range [begin(),end())
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    //Greater Int greater<T>() Function Object / Functor

    return 0;
}
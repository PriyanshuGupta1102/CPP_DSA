#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    if(a > b) {
        return true;
    }else {
        return false;
    }
}

int main() {
    int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
    int n = sizeof(arr) / sizeof(int);

    // 1) Using a Comparator

    sort(arr, arr + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // 2) Using greater<T>() function object / functor

    sort(arr, arr + n, greater<int>());

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
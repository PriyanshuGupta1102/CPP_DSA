#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dnfsort(vector<int>& arr){
    int low = 0;
    int mid = 0;
    int n = arr.size();
    int high = n - 1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }   
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dnfsort(arr);
}

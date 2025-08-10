#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int restaurantCustomers(vector<vector<int>> arr, int n){
    int latest = arr[0][1];
    int cnt = 1;
    int maxSoFar = 0;

    sort(arr.begin(), arr.end());


    for(int i = 0; i < n - 1; i++){
        int t1 = arr[i][1];
        int t2 = arr[i+1][0];
        if(t1 >= t2){
            cnt++;
        }
        if(latest < t1){
            cnt--;
            latest = t1;
        }
        maxSoFar = max(maxSoFar, cnt);
    }

    return cnt;

}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr;

    for(int i = 0; i < n; i++){
        int a; int b;
        cin >> a;
        cin >> b;
        arr.push_back({a,b});
    }

    cout << restaurantCustomers(arr, n) << endl;

    return 0;
}
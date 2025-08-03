#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> ti;
    cin >> n;

    int cnt;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ti.push_back(temp);
    }

    sort(ti.begin(), ti.end());

    for(int i = 0; i < n; i++) {
        if(sum > ti[i]) {
            cnt++;
        }else {
            sum += ti[i];
        }
    }
    cout << n - cnt << endl;    
    
    return 0;
}
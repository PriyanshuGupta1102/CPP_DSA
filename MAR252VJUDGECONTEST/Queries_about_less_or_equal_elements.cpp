#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> a;
    vector<int> b;
    vector<int> ti;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    
    sort(a.begin(), a.begin());
    sort(b.begin(), b.begin());

    for(int i = 0; i < n,m; i++) {
        if(a[i] <= b[i]){
            int temp = b[i] - a[i];
            ti.push_back(temp);
        }
    }

    for(int i = 0; i < n; i++) {
       cout << ti[i];
    }



    return 0;
}
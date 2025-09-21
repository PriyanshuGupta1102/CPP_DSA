#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void apartments(vector<int> ApartSize, vector<int> DesiredSize, int k){
    int allot = 0;
    int cnt = 0;
    
    sort(ApartSize.begin(), ApartSize.end());
    sort(DesiredSize.begin(), DesiredSize.end());

    for(int i = 0; i < ApartSize.size() && allot < DesiredSize.size(); i++){
        if(DesiredSize[allot] - k <= ApartSize[i] && DesiredSize[allot] + k >= ApartSize[i]){
            cnt++;
            allot++;
        }
        allot++;
    }

    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    int k;
    cin >> k;

    vector<int> ApartSize;
    vector<int> DesiredSize;

    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        DesiredSize.push_back(p);
    }

    for(int i = 0; i < m; i++){
        int q;
        cin >> q;

        ApartSize.push_back(q);
    }

    apartments(ApartSize, DesiredSize, k);

    return 0;
}
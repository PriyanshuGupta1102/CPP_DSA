#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void interestingDrink(vector<int> x, vector<int> m, int q, int n){

    vector<int> result;
    sort(x.begin(), x.end());

    for(int i = 0; i < q; i++){
        int noOfShops = 0;
        int l = 0; int u = n - 1;

        while(l < u){
            if(m[l] < x[l]){
                noOfShops = n - l;
                result.push_back(noOfShops);
                l++;
            }else if(m[u] > x[u]){
                result.push_back(q);
                u--;
            }
        }
    }

    for(int num : result){
        cout << num << endl;
    }

}

int main(){

    int n;
    cin >> n;

    vector<int> x;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        x.push_back(t);
    }

    int q;
    cin >> q;

    vector<int> m;

    for(int i = 0; i < q; i++){
        int t;
        cin >> t;
        m.push_back(t);
    }

    interestingDrink(x, m, q, n);

    return 0;
}
#include<iostream>
#include<vector> 
using namespace std;

int inversionOfArray(vector<int>& b){
    int inv = 0;
    for(int i = 0; i < b.size(); i++){
        for(int j = i + 1; j < b.size(); j++){
            if(b[i] > b[j]){
                inv++;
            }
        }
    }
    return inv;
}

int main() {
    int t; int n;
    cin >> t;

    vector<vector<int>> a;

    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> c;
        for(int j = 0 ; j <= n - 1; j++){
            int p;
            cin >> p;
            c.push_back(p);
        }
        a.push_back(c);
        c.clear();
        cout << endl;
    }
    for(vector<int> b : a){
        cout << inversionOfArray(b) << endl;
    }

    return 0;
}
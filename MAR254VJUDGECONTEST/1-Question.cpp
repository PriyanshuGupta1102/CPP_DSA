#include<iostream>
#include<vector>    
#include<algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int x;
    cin >> x;
    
    vector<int> p(n);

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        p.push_back(temp);
    }

    sort(p.begin(), p.end());
    int gondalas = 0;

    int i = 0; 
    int j = p.size() - 1;
    while(i <= j){
        if(p[i] + p[j] <= x){
            i++;
        }
        j--;
        gondalas++;
    }
    cout << gondalas;

    return 0;
}
#include<iostream>
#include<vector> 
#include<cmath>
#include<algorithm>
using namespace std;
// time : n steps and each step is const therefore ~ O(n)
// space : 1 due l, r ~ O(1)

int trap(vector<int>& h) {
    int total = 0;
    int n = h.size();
    
    int i = 0; 
    int j = n - 1;

    int l = INT_MIN; // max([0......i])
    int r = INT_MIN; // max([j.....n-1])

    while(i <= j){
        l = max(l, h[i]);
        r = max(r, h[j]);
        if(l < r){
            int wi = l - h[i];
            total += wi;
            i++;
        }else{
            int wj = r - h[j];
            total += wj;
            j--;
        }
    }

    return total;
}

int main() {
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(h) << endl;
}
// Output: 6
#include <iostream>
#include <vector> 
#include <stack>
#include <algorithm>
using namespace std;

// You must scan the array L to R and Solve in O(n) Time ----> Must Kept this in Mind 

// time : O(n)
// space : O(n)
vector<int> f(const vector<int>& A){
    stack<pair<int, int>> s; // <index> // to track 
    int n = A.size();
    vector<int> ans(n, -1);

    for(int i = 0; i <= n - 1; i++){
        // Find out the elements for which A[i] can be the 
        // nearest greater element to their right

        while(!s.empty() && A[i] > s.top().first){
            // A[i] is the nearest greater element for s.top().first
            ans[s.top().second] = A[i];
            s.pop();
        }
        s.push({A[i], i});
    }

    return ans;
}

int main() {
    vector<int> A = {5, 3, 6, 7, 2, 1, 4};

    vector<int> ans = f(A);
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
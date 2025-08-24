#include <iostream>
#include <vector> 
#include <stack>
#include <algorithm>
using namespace std;

// time : O(n)
// space : O(n)
vector<int> f(vector<int>& A){
    stack<int> s; // <index>
    vector<int> ans; // to store span

    int n = A.size();

    for(int i = 0; i < n; i++){
        // Find the index of the nearest greater element 
        // to the left of A[i]

        while(!s.empty() && A[s.top()] <= A[i]){
            s.pop();
        }

        int j; // to store the index of the nearest greater element to the left of A[i]
        if(s.empty()){
            // there is no greater element to the left of A[i]
            j = -1;
        }else{
            // whatever is at the top of the stack is the nearest 
            // greater element to the left of A[i]
            j = s.top();
        }

        ans.push_back(i - j);
        s.push(i);
    }
    return ans;
}

int main() {
    vector<int> A = {100, 80, 60, 70, 60, 75, 85, 200};

    vector<int> ans = f(A);
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
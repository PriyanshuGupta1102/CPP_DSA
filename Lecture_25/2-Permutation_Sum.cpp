#include <iostream>
#include <cstring> 
#include <vector>
using namespace std; 

void f(const vector<int>& Candidates, int target, vector<int>& perm){
    // Base Case

    if(target == 0){
        for(int op : perm){
            cout << op << " ";
        }
        cout << endl;
        return;
    }
    // Recursive Case

    for(int j = 0; j < Candidates.size(); j++){
        if(Candidates[j] <= target){
            perm.push_back(Candidates[j]);
            f(Candidates, target - Candidates[j], perm);
            perm.pop_back();
        }
    }
    

    
}

int main() {

    vector<int> Candidates = {2, 3, 5, 7};

    int target = 7;

    vector<int> perm;

    f(Candidates, target, perm);

    return 0;
}
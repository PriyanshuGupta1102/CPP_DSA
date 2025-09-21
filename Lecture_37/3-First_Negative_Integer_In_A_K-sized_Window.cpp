#include <iostream>
#include <queue>
#include <vector>
using namespace std; 

int main() {

    int arr[] = {-2, 0, -1, 2, -3, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    int k = 4;

    int i = 0; 
    int j = 0;

    queue<int> q;
    vector<int> ans;

    while(j < k){
        if(arr[j] < 0){
            q.push(arr[j]);
        }
        j++;
    }

    if(!q.empty()){
        ans.push_back(q.front());
    }else{
        ans.push_back(0);
    }

    while(j < n){
        if(arr[i] < 0){
            q.pop();
        }
        i++;
        if(arr[j] < 0){
            q.push(arr[j]);
        }
        if(!q.empty()){
            ans.push_back(q.front());
        }else{
            ans.push_back(0);
        }
        j++;
    }
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}
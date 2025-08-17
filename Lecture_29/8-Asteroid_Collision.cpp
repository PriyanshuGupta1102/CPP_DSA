#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

// time : O(n)
// space : O(n)

// e.g. assume all ast have +ve except for the last one which is -ve and also 
// with the highest magnitude : 2n-1 ops will be done

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int ast : asteroids){
            if(ast < 0 and !s.empty() and s.top() > 0){
                // Collisions will occur
                bool flag = true; // assume ast will survive collisions
                while(!s.empty() and s.top() > 0){
                    if(abs(ast) > s.top()){
                        // asteroids at the top of the stack will be destroyed 
                        s.pop();
                    }else if(abs(ast) < s.top()){
                        // ast will be destroyed
                        flag = false;
                        break;
                    }else{
                        // asteroids at the top of the stack and ast both will
                        // be destroyed
                        s.pop();
                        flag = true;
                        break;
                    }
                }
                if(flag){
                    // ast has survived collisions, so track it
                    s.push(ast);
                }
            }  else{
                // no collisions will occur, so track ast
                s.push(ast);
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main() {
    
}
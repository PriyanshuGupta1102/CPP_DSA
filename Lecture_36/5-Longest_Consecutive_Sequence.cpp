#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        unordered_map<int, bool> startMap;
        for(int x : nums){
            // can x be a starting point of a sequence of consecutive elements ? 
            startMap[x] = true;
        }
    }
};

int main() {    



    return 0;
}
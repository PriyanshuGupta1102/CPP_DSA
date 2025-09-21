#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    string s = "aabacbebebe";
    int n = s.size();
    int k = 3;

    int i = 0;
    int j = 0;

    int max_len  = 0;

    int uniqCnt = 0;

    unordered_map<char, int> freqMap; 

    while(j < n){

        // Expand the window
        freqMap[s[j]]++;
        if(freqMap[s[j]] == 1){
            uniqCnt++;
        }

        // check for the violation of the window property
        if(uniqCnt > k){
            // window property has been violated, so start shrinking
            while(uniqCnt > k){
                freqMap[s[i]]--;
                if(freqMap[s[i]] == 0){
                    uniqCnt--;
                }
                i++;
            }
        }

        // check for the validity of the window, and update the answer
        if(uniqCnt == k){
            // you've found a vlaid window, so track its length
            max_len = max(max_len, j - i + 1);
        }

        // continue expansion of the window

        j++;
    }

    cout << max_len << endl;

    return 0;
}
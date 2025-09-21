#include <iostream>
#include <map>
#include <vector>
using namespace std;

// time : O(nlogn) since we are using a map<>
bool isDuplicatePresent(const vector<int>& v){
    map<int, int> freqMap;
    for(int x : v){
        freqMap[x]++;
        if(freqMap[x] > 1){
            // Duplicate Found
            return true;
        }
    }

    // for(pair<int, int> p : freqMap) {
    //     int el = p.first;
    //     int fr = p.second;
    //     cout << "freq(" << el << ") =" << fr << endl;
    // }

    // No Duplicate Found
    return false;
}

int main() {
    vector<int> v = {1, 2, 3, 4};

    isDuplicatePresent(v) ? cout << "true" << endl : cout << "false" << endl;


    return 0;
}
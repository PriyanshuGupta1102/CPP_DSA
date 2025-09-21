#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

    vector<int> ropesLengths = {4, 3, 2, 6};

    // time : O(nlogn)
    // space : O(n) due to minHeap
    priority_queue<int, vector<int>, greater<int>> minHeap(ropesLengths.begin(), ropesLengths.end());

    int total = 0;

    

    return 0;
}
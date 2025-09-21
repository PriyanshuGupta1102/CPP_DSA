#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
int main() {
    // vector<int> arr = {20, 5, 0, 25, 15, 10};
    vector<int> arr = {-10, -20, 1, 2, 3};
    int n = arr.size();
    
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    
    for(int num : arr){
        int val = abs(num);
        if(val > first){
            third = second;
            second = first;
            first = val;
        }else if(val > second){
            third = second;
            second = val;
        }else if(val > third){
            third = val;
        }
    }
    
    cout << first * second * third << endl;
    
    return 0;
}
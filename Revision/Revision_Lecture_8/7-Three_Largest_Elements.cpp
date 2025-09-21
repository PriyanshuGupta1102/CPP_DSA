#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    vector<int> arr = {20, 5, 0, 25, 15, 10};
    int n = arr.size();
    
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    
    for(int num : arr){
        if(num > first){
            third = second;
            second = first;
            first = num;
        }else if(num > second){
            third = second;
            second = num;
        }else if(num > third){
            third = num;
        }
    }
    
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    
    return 0;
}
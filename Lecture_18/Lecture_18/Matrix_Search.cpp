#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int m, int n, int target) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == target){
                // you've found the 'target' in the (i,j)th cell
                return true;
            }
        }
    }
}  

int main() {
    int arr[3][3] = {{50,80,20}, {90,10,70}, {60,30,40}};
    int m,n = 3;

    int target = 100;


   cout << isPresent(arr, m, n, target)? cout << "True" : cout << "False" << endl;

    return 0;
}
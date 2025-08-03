#include <iostream>
using namespace std;

void wavePrint(int arr[][10], int m, int n) {
    for(int j = 0; j < n; j++) {
        // print values in the jth colmumn
        if(j % 2 == 0) {
            // jth column is even 
            // iterate over rows from top to bottom

            for(int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
            
        }else {
            // jth column is odd
            // iterate over row from bottom to top

            for(int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    int arr[10][10] = {{10,20,30}, 
                     {40,50,60}, 
                     {70,80,90}};


    int n,m = 10;
    
    wavePrint(arr, m, n);
    
    return 0;
}
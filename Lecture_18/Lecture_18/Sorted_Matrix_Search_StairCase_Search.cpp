#include <iostream>
using namespace std;

bool isPresent(int mat[][3], int n, int m, int t) {
    int i = 0; 
    int j = n -  1;

    while(i < m && j >= 0) {
        if(mat[i][j] == t){
            return true;
        }else if(mat[i][j] < t) {
            i++;
        }else {
            j--;
        }
    }
    return false;
}

int main() {
    int mat[][3] = {{10,20,30}, {40,50,60}, {70,80,90}};

    int n = 3;
    int m = 3;

    int t = 40;

    cout << isPresent(mat, n, m, t)? cout << "True" : cout << "False";


    return 0;
}
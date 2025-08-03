#include <iostream>
using namespace std; 

void printPath(char path[][10], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << path[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

 void f(char maze[][10], char path[][10], int m, int n, int i, int j){
    
    // Base Case

    if(i == m || j == n || i == -1 || j == -1){
        return;
    }

    if(maze[i][j] == 'X'){
        return;
    }

    if(i == m - 1 && j == n - 1){
        path[m - 1][n - 1] = '1';
        printPath(path, m, n);
        path[m - 1][n - 1] = '0';
        cout << path << endl;
        return;
    }

    // if(path[i][j] == '1') { // First Fix
    //     // (i, j)th cell is already part of the path we are building
    //     // So no need to decide for it again
    //     return;
    // }

    // Recursive Case
    path[i][j] = '1';
    maze[i][j] = 'X'; // Second Fix 
    f(maze, path, m, n, i, j + 1);
    f(maze, path, m, n, i + 1, j);
    f(maze, path, m, n, i, j - 1);
    f(maze, path, m, n, i - 1, j);
    path[i][j] = '0'; // BackTracking
    maze[i][j] = '0';
}

int main() {
    char maze[][10] = {
        "0X00",
        "000X",
        "X0X0",
        "X00X",
        "XX00"
    };

    char path[][10] = {
        "0000",
        "0000",
        "0000",
        "0000",
        "0000"
    };

    int m = 5;
    int n = 4;

    f(maze, path, m, n, 0, 0);

    return 0;
}
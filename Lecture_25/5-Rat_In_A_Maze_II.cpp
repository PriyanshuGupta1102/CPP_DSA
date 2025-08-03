#include <iostream>
using namespace std;

int f(char maze[][10], int m, int n, int i, int j){
    
    // Base Case

    if(i == m || j == n){
        return 0;
    }

    if(maze[i][j] == 'X'){
        return 0;
    }

    if(i == m - 1 && j == n - 1){
        return 1;
    }

    // Recursive Case
    // f(i, j) = Check if there is a Path from (i, j) to (m - 1, n - 1)
    // Decide the next Step

    // option 1 : Move Right
    // option 2 : Move Left

    int x = f(maze, m, n, i, j + 1);

    int y = f(maze, m, n, i + 1, j);

    return x + y;

    // return f(maze, m, n, i, j + 1) + f(maze, m, n, i + 1, j);
}

int main() {
    char maze[][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"
    };

    int m = 4;
    int n = 4;

    cout << f(maze, m, n, 0, 0);

    return 0;
}
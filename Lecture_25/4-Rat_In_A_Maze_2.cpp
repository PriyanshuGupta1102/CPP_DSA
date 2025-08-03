#include <iostream>
using namespace std;

bool f(char maze[][10], int m, int n, int i, int j){
    
    // Base Case

    if(i == m || j == n){
        return false;
    }

    if(maze[i][j] == 'X'){
        return false;
    }

    if(i == m - 1 && n - 1){
        return true;
    }

    // Recursive Case
    // f(i, j) = Check if there is a Path from (i, j) to (m - 1, n - 1)
    // Decide the next Step

    // if(i == m - 1){ 
    //     return f(maze, m, n, i, j + 1);
    // }

    // if(j == n - 1){
    //     return f(maze, m, n, i + 1, j);
    // }

    // option 1 : Move Right
    // option 2 : Move Left
    return f(maze, m, n, i, j + 1) || f(maze, m, n, i + 1, j);
}

int main() {
    char maze[][10] = {
        "0000",
        "0XX0",
        "00XX",
        "0000"
    };

    int m = 4;
    int n = 4;

    f(maze, m, n, 0, 0) ? cout << "path found" << endl : cout << "path not found" << endl;

    return 0;
}
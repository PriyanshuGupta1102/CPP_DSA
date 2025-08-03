#include<iostream>
#include<vector> 
using namespace std;

class Solution {
public:

    bool isvalid(int r, int n, vector<string>& board, int j){

        // Check if you can place Qr in the jth column of row r ? 

        // 1. Check in the jth column if there is any previously 
        // placed queen Qi where 0<=i<=r-1

        for(int i = r - 1; i >= 0; i--){
            if(board[i][j] == 'Q'){
                // there is already a previously placed queen in the jth column 
                // of the board therefore u cannot placed
                // Qr in the jth column of the row
                return false;
            }
        }

        // 2. Check in the right diagonal of the jth column if there is 
        // any previously placed queen Qi where 0<=i<=r-1

        for(int i = r - 1, step = 1; i >= 0 && j + step < n; i--, step++){
            if(board[i][j + step] == 'Q'){
                // you've found a previously placed queen along the right diagonal
                // of the jth column so you cannot place queen r in the jth col
                // of row r
                return false;
            }
        }

        // 3. Check in the left diagonal of the jth column if there is
        // any previously placed queen Qi where 0<=i<=r-1

        for(int i = r - 1, step = 1; i >= 0 && j - step >= 0; i--, step++){
            if(board[i][j - step] == 'Q'){
                // you've found a previously placed queen along the right diagonal
                // of the jth column so you cannot place queen r in the jth col
                // of row r
                return false;
            }
        }

        // you can place Qr in the jth column 
        
        return true;
        
    }

    void f(int r, int n, vector<string>& board, vector<vector<string>>& allBoards){

        // Base Case

        if(r == n){ // you've build a valid configuration, so track it
            allBoards.push_back(board);
            return;
        }

        // Recursive Case

        // f(r)= take decisions for Qr to Qn-1

        // decide for Qr

        for(int j = 0; j < n; j++){
            if(isvalid(r, n, board, j)){
                board[r][j] = 'Q';
                f(r + 1, n, board, allBoards);
                board[r][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> allBoards;

        vector<string> board;
        for(int i = 1; i <= n; i++){
            string row(n,'.');
            board.push_back(row);
        }

        f(0, n, board, allBoards);


        return allBoards;
    }
};
#include <iostream>
#include <vector>

#define WIDTH 7
#define HEIGHT 6

bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            if(j + 3 < WIDTH && board[i][j] == player && board[i][j+1] == player && board[i][j+2] == player && board[i][j+3] == player)
                return true;
            if(i + 3 < HEIGHT && board[i][j] == player && board[i+1][j] == player && board[i+2][j] == player && board[i+3][j] == player)
                return true;
            if(i + 3 < HEIGHT && j + 3 < WIDTH && board[i][j] == player && board[i+1][j+1] == player && board[i+2][j+2] == player && board[i+3][j+3] == player)
                return true;
            if(i - 3 >= 0 && j + 3 < WIDTH && board[i][j] == player && board[i-1][j+1] == player && board[i-2][j+2] == player && board[i-3][j+3] == player)
                return true;
        }
    }
    return false;
}
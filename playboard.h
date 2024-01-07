#include <iostream>
#include <vector>

#define WIDTH 7
#define HEIGHT 6

void printBoard(const std::vector<std::vector<char>>& board) {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            std::cout << board[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
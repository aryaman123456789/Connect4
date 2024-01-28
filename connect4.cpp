#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "playboard.h"
#include "wincheck.h"

#define WIDTH 7
#define HEIGHT 6

int ComputerMove() {
    srand(time(0));
    return rand() % WIDTH + 1;
}

int main() {
    std::vector<std::vector<char>> board(HEIGHT, std::vector<char>(WIDTH, '.'));
    int moves = 0;
    while(true) {
        printBoard(board);
        int column;
        if(moves % 2 == 0) {
            std::cout << "Enter the column where you want to drop your disc: ";
            std::cin >> column;
        } else { 
            column = ComputerMove();
            std::cout << "Computer drops its disc in column " << column << "\n";
        }
        if(column < 1 || column > WIDTH) {
            std::cout << "Invalid column. Please enter a number between 1 and " << WIDTH << ".\n";
            continue;
        }
        column--;
        int row;
        for(row = HEIGHT - 1; row >= 0; row--) {
            if(board[row][column] == '.') {
                board[row][column] = (moves % 2 == 0 ? 'X' : 'O');
                break;
            }
        }
        if(row < 0) {
            std::cout << "This column is full. Please try another one.\n";
            continue;
        }
        if(checkWin(board, (moves % 2 == 0 ? 'X' : 'O'))) {
            printBoard(board);
            std::cout << "Player " << (moves % 2 + 1) << " wins!\n";
            break;
        }
        moves++;
        if(moves == WIDTH * HEIGHT) {
            printBoard(board);
            std::cout << "It's a draw.\n";
            break;
        }
    }
    return 0;
}
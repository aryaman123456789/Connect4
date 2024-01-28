# Connect 4 Game in C++

This repository contains the source code for a text-based Connect 4 game implemented in C++. The game is designed to be played in the console and supports both single-player (against a simple AI) and two-player modes.

## Features

- **Modular Design**: The program is decomposed into three modules: the game's text-based user interface, the game board representation, and the player representation (human or computer).

- **Game Patterns**: The game uses four distinct types of patterns (Aggressive, Defensive, Warning, and Tactical) to determine a move in single-player mode.

- **Code Optimization**: The use of `constexpr` for defining constants like table width and height makes the code more readable and maintainable.

- **Winning Condition Check**: A function checks if there are 4 blocks in one of the ways (horizontal, vertical, diagonal) and then returns the result.

- **Player Change**: A function swaps players after each turn.

- **Error Handling**: The game implements error handling for invalid moves.

- **User Interface**: The game features a clear and intuitive user interface. Different symbols are used for different players and the game board is designed in a way that's easy to understand.

## How to Play

The game starts by displaying an empty game board. Players take turns dropping their discs into any of the slots. The first player to get four of their discs in a row (either horizontally, vertically, or diagonally) wins the game. If the game board is filled and no player has won, the game is a draw.


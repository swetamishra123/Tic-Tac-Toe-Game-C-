
# Tic Tac Toe Game - C++

## Overview
This repository contains a console-based Tic Tac Toe game implemented in C++. The game supports two players taking turns to make their moves on a customizable grid until one player wins or the game ends in a draw.

## Repository Link
[GitHub Repository](https://github.com/swetamishra123/Tic-Tac-Toe-Game-C-.git)

## Features
- Two-player mode: Play against a friend on the same computer.
- Customizable Grid: Choose the size of the game board (e.g., 3x3, 4x4, etc.).
- Win Detection: The game automatically detects when a player has won.
- Draw Detection: The game ends in a draw when the board is full and no player has won!.

## How to Play
1. Clone the repository to your local machine.
    ```bash
    git clone https://github.com/swetamishra123/Tic-Tac-Toe-Game-C-.git
    cd Tic-Tac-Toe-Game-C-
    ```

2. Compile the code.
    ```bash
    g++ -o tic_tac_toe main.cpp
    ```

3. Run the game.
    ```bash
    ./tic_tac_toe
    ```

4. Follow the on-screen instructions to make your moves.

## Game Controls
- The game uses a simple coordinate system for moves. Players input the row and column where they want to make their move.
- Example: To make a move in the center of the board, input "2 2".

## Customizable Grid
- When running the game, you can enter the desired grid size (e.g., 3 for a 3x3 grid).

## Sample Gameplay
```
Welcome to Tic Tac Toe!

Player 1 (X) - Player 2 (O)

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player 1's turn. Enter your move (row column): 2 2

 X |   |  
-----------
   | O |  
-----------
   |   |  

...

Player 1 Wins!

Congratulations, Player 1!
```

## Contributing
Feel free to contribute to the improvement of this Tic Tac Toe game. You can open issues for bug reports or suggest enhancements. Pull requests are also welcome.

## License
This Tic Tac Toe game is open-source and available under the [MIT License](LICENSE).
```

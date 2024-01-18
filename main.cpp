#include <iostream>
#include <vector>

void drawBoard(const std::vector<std::vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (char cell : row)
        {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

bool checkWin(const std::vector<std::vector<char>> &board, char player)
{
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < board.size(); ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }

    return false;
}

bool checkDraw(const std::vector<std::vector<char>> &board)
{
    for (const auto &row : board)
    {
        for (char cell : row)
        {
            if (cell == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int gridSize;
    std::cout << "Enter the grid size (e.g., 3 for a 3x3 grid): ";
    std::cin >> gridSize;

    std::vector<std::vector<char>> board(gridSize, std::vector<char>(gridSize, ' '));
    char currentPlayer = 'X';
    int row, col;
    bool gameOver = false;

    while (!gameOver)
    {
        drawBoard(board);
        std::cout << "Player " << currentPlayer << ", enter row and column (0-" << gridSize - 1 << "): ";
        std::cin >> row >> col;

        if (row >= 0 && row < gridSize && col >= 0 && col < gridSize && board[row][col] == ' ')
        {
            board[row][col] = currentPlayer;
            gameOver = checkWin(board, currentPlayer);

            if (gameOver)
            {
                drawBoard(board);
                std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            }
            else if (checkDraw(board))
            {
                drawBoard(board);
                std::cout << "It's a draw!" << std::endl;
                gameOver = true;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else
        {
            std::cout << "Invalid move. Try again." << std::endl;
        }
    }

    return 0;
}

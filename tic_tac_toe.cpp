#include "tic_tac_toe.hpp"
#include <iostream>
#include <cctype>

// =============================
// create_board
// =============================
std::vector<char> create_board(int N) {
    // TODO:
    // Create and return a Board (std::vector<char>)
    // with size N*N, each element set to a space ' '.
    // Use a loop (not resize).
    //
    // Example: for a 3x3 board, return vector of length 9 filled with spaces.
    //                  does not have to be spaces, anything to let the user know
    //                  they can put a valid move, 
    //                  for obvious reasons dont use 'X' or 'O' to fill in the board
    
    return std::vector<char>(); // TODO: replace with your implementation
}

// =============================
// print_board
// =============================
void print_board(const std::vector<char>& board, int N) {
    // TODO:
    // Print the board in grid form.
    // Use loops! Example for N=3:
    //
    //    0   1   2
    // 0  X | O |  
    //    ---+---+---
    // 1    | X |  
    //    ---+---+---
    // 2    |   | O
    //
    // Hint: an index in the vector is (row * N + col).

    // TODO: your code
}

// =============================
// is_valid_move
// =============================
bool is_valid_move(const std::vector<char>& board, int N, int row, int col) {
    // TODO:
    // Return true only if:
    //   - row and col are within the board bounds
    //   - the cell board[row*N + col] contains a space ' ' (empty)
    
    return false; // TODO: replace
}

// =============================
// make_move
// =============================
bool make_move(std::vector<char>& board, int N, int row, int col, char player) {
    // TODO:
    // If the move is valid (use is_valid_move):
    //   - Place player's mark in the board
    //   - Return true
    //
    // Otherwise return false.

    return false; // TODO: replace
}

// =============================
// check_winner
// =============================
char check_winner(const std::vector<char>& board, int N) {
    // TODO:
    // Check rows:
    //   If a row has N identical non-space characters, return that char.
    //
    // Check columns.
    //
    // Check main diagonal (0,0) (1,1) (2,2) ...
    //
    // Check anti-diagonal: (0,N-1), (1,N-2), ...
    //
    // If no winner:
    //   If any space ' ' exists, return ' ' (game continues)
    //   Otherwise return 'D' (draw)

    return ' '; // TODO: replace with your result
}

// =============================
// parse_move
// =============================
bool parse_move(const std::string& input, int& row, int& col) {
    // TODO:
    // Parse two integers from the string. 
    // The string will have the two numbers separated
    // by at least one space.
    // Examples of valid input:
    //    "1 2"
    //    "  0   0"
    //
    // You may:
    //   - Use a loop to build number tokens, OR
    //   - Use std::stoi in try/catch blocks
    //
    // On success: set row and col, return true.
    // On failure: return false.

    return false; // TODO: replace
}

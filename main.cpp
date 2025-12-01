#include <iostream>
#include <string>
#include "tic_tac_toe.hpp"

int main() {
    std::cout << "Tic-Tac-Toe Final Project\n";

    int N = 3; // Fixed classic board size
    std::vector<char> board = create_board(N);

    char current = 'X';

    while (true) {
        print_board(board, N);

        std::cout << "Player " << current 
                  << ", enter your move as 'row col': ";

        std::string line;
        if (!std::getline(std::cin, line)) {
            std::cout << "Input closed.\n";
            return 0;
        }

        int r, c;
        if (!parse_move(line, r, c)) {
            std::cout << "Invalid format. Try again.\n";
            continue;
        }

        if (!is_valid_move(board, N, r, c)) {
            std::cout << "Invalid move. Try again.\n";
            continue;
        }

        make_move(board, N, r, c, current);

        char result = check_winner(board, N);
        if (result == 'X' || result == 'O') {
            print_board(board, N);
            std::cout << "Player " << result << " wins!\n";
            break;
        }
        if (result == 'D') {
            print_board(board, N);
            std::cout << "Game ends in a draw.\n";
            break;
        }

        current = (current == 'X') ? 'O' : 'X';
    }

    return 0;
}

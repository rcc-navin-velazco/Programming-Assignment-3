

#ifndef TIC_TAC_TOE_HPP
#define TIC_TAC_TOE_HPP

#include <vector>
#include <string>



std::vector<char> create_board(int N);
void print_board(const std::vector<char>& board, int N);
bool is_valid_move(const std::vector<char>& board, int N, int row, int col);
bool make_move(std::vector<char>& board, int N, int row, int col, char player);
char check_winner(const std::vector<char>& board, int N);
bool parse_move(const std::string& input, int& row, int& col);

#endif

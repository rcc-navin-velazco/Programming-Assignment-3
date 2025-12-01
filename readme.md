# Tic-Tac-Toe Final Programming Assignment  
### C++ Programming – Level 1  
### RCC Programming Course


Do the same steps as in the previous assignments, where you download the project as a zip file and extract it.

This final assignment is designed to test your understanding of **functions**, **vectors**, **loops**, and **control statements** in C++. You will implement a fully-functional **Tic-Tac-Toe** game using starter code.

You will be given:
  
- `tictactoe.cpp` — function definitions with TODOs  
- `main.cpp` — driver program that runs your game

Your job is to complete all TODOs to produce a working game.

---

## 📌 **Learning Objectives**

By completing this assignment, you will practice:

- Declaring and defining **functions**  
- Using **std::vector** to store game board state  
- Using **for loops**, **while loops**, and **if/else** control flow  
- Passing values by reference and by value  
- Validating user input  
- Structuring a C++ project across multiple files  

---

## 📁 **Files Included**

.  
├── README.md  
├── main.cpp  
├── tictactoe.hpp  
└── tictactoe.cpp  


---

## 📝 **Program Requirements**

Your Tic-Tac-Toe game must:

1. Display a 3×3 board using a vector of characters.
2. Let two human players alternate turns.
3. Validate user moves (cannot place on filled squares).
4. Detect:
   - X wins
   - O wins
   - Tie games
5. Use the functions declared in `tictactoe.hpp`.

You **must not** modify the function signatures in the header file.

---

## 🧠 **Concepts You Must Use**

✔ `std::vector<char>`  
✔ multiple functions  
✔ loops (`for`, `while`)  
✔ conditionals (`if/else`)  
✔ reference parameters  
✔ no `using namespace std;` (must use `std::`)  

---

## 🛠️ **Compiling & Running**

### **Using g++ (Linux / macOS / Windows MinGW)**

Compile:

```bash
g++ main.cpp tictactoe.cpp -o tictactoe
```
Run:

```bash
./tictactoe
```

### **Using Visual Studio Developer Command Prompt**

Compile:

```bash
cl main.cpp tictactoe.cpp
```
Run:

```bash
main.exe
```


## ✔️ Expected Output Example
```
Welcome to Tic-Tac-Toe!

 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9

Player X, enter your move (1-9): 5

 X | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

Player O, enter your move (1-9): 1

 O | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

Player X, enter your move (1-9): 9

 O | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | X

Player O, enter your move (1-9): 3

 O | 2 | O
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | X

Player X, enter your move (1-9): 7

 O | 2 | O
---+---+---
 4 | X | 6
---+---+---
 X | 8 | X

Player X wins!
```

## Grading Rubric

**Correctness — 50%**

- `create_board` returns correct size and initial values.  
- `is_valid_move` correctly checks bounds and emptiness.  
- `make_move` only places marks when valid.  
- `check_winner` correctly detects row/column/diagonal wins and draw.  

**Use of Required Constructs — 20%**

- Uses `std::vector`, functions, `for` loops, and control statements (no hardcoding).  

**Robustness & Input Handling — 20%**

- `parse_move` tolerates extra spaces, rejects invalid tokens, and avoids crashes.  

**Style & Readability — 10%**

- Clear variable names, consistent indentation, brief comments.

## Turning it in

You will do what you have done in all your labs and programming assignments. Take the project folder and compress it to a zip file. Submit the zip file.
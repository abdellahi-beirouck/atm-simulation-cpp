# ATM Simulation in C++

A terminal-based ATM simulator. This was built as a foundational project to practice core logic, state management, and input validation in C++.

## Technical Overview
*   **State Management:** Tracks the user's balance across multiple transactions.
*   **Transaction Logic:** Validates withdrawal amounts to prevent overdrafts and rejects zero or negative transaction values.
*   **Input Handling:** Prevents an infinite loop if a user types a letter instead of a number.

## The Logic Issue
Initial testing revealed that entering a letter instead of a number would lock the terminal in an infinite loop. 

*   **Root Cause:** The `cin` command expected a number, but got a letter. It broke, and left that bad input stuck in the memory buffer. 
*   **Solution:** Implemented `cin.fail()` checks immediately after every input. The program detects the error, resets the stream with `cin.clear()`, and clears the buffer using `cin.ignore(10000, '\n')` (discarding up to 10,000 characters until the Enter key is pressed). Finally, the variable is reset to `0` so the user can safely try again.

## Project Files
*   `Algorithm.txt` - The pseudo-code blueprint designed to plan the logic before writing any C++.
*   `main.cpp` - The C++ source code.

## Execution
1. Compile the code which requires a C++ compiler (this outputs an executable named `atm`):
   `g++ main.cpp -o atm`
2. Run the executable:
   * Linux/macOS: `./atm`
   * Windows: `atm.exe`

---
**Transparency & Methodology Note:** 
I used an AI assistant as a discussion partner to debate the core logic of both the algorithm and the C++ implementation, diagnose the `cin` buffer issue, and help structure this README. 

I wrote the initial `algorithm.txt` blueprint, designed the transaction rules, built the final C++ implementation, and performed all testing and verification. During testing, I also spotted and fixed a logic bug where selecting "Quit" would incorrectly trigger the error message before exiting.

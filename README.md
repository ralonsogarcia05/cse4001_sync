# cse4001_sync

## Build Instructions

```bash
make clean
make
This generates the executable: ./cse4001_sync

Run Each Problem
Run the program with one argument (1-4) to execute a specific problem:

Problem 1 - No-Starve Readers-Writers
bash
./cse4001_sync 1
Problem 2 - Writer-Priority Readers-Writers
bash
./cse4001_sync 2
Problem 3 - Dining Philosophers (Naive - Can Deadlock)
bash
./cse4001_sync 3
Problem 4 - Dining Philosophers (Walter - Deadlock-Free)
bash
./cse4001_sync 4
Files
problem1.cpp - No-starve readers-writers

problem2.cpp - Writer-priority readers-writers

problem3.cpp - Dining philosophers naive solution

problem4.cpp - Dining philosophers deadlock-free solution

cse4001_sync.cpp - Driver (main)

Makefile

## Output Screenshots

![Problem 1 Output](./problem1.png)
![Problem 2 Output](./problem2.png)
![Problem 3 Output](./problem3.png)
![Problem 4 Output](./problem4.png)

Author
Richard Alonso Garcia

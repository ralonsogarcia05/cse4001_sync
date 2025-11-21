<<<<<<< HEAD
# CSE4001 Synchronization Assignment

This project contains implementations of four classic synchronization problems using POSIX threads and semaphores.

## Build

To compile:

```bash
make clean
make

This generates the executable:

./cse4001_sync

Run Each Problem

Run the program with one argument (1–4) to execute a specific problem:

Problem 1 – No-Starve Readers–Writers
./cse4001_sync 1

Problem 2 – Writer-Priority Readers–Writers
./cse4001_sync 2

Problem 3 – Dining Philosophers (Naive – Can Deadlock)
./cse4001_sync 3

Problem 4 – Dining Philosophers (Waiter – Deadlock-Free)
./cse4001_sync 4

Files

problem1.cpp – No-starve readers-writers

problem2.cpp – Writer-priority readers-writers

problem3.cpp – Dining philosophers naive solution

problem4.cpp – Dining philosophers deadlock-free solution

cse4001_sync.cpp – Driver (main)

Makefile

Author

Richard Alonso Garcia
=======
# cse4001_sync
outputs: 
![Screenshot 1](problem 1.png)
![Screenshot 2](problem 2.png)
![Screenshot 3](problem 3.png)
![Screenshot 4](problem 4.png)


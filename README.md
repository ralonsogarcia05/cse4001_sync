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

![Problem 1 Output](https://raw.githubusercontent.com/ralonsogarcia05/cse4001_sync/main/problem1.png)
**Solution #1 – No-Starve Readers-Writers:** Readers use a lightswitch to lock the room, but writers control a turnstile to prevent indefinite reading. Semaphores and counters manage access without creating a separate class.

![Problem 2 Output](https://raw.githubusercontent.com/ralonsogarcia05/cse4001_sync/main/problem2.png)
**Solution #2 – Writer-Priority Readers-Writers:** Both readers and writers can lock the room, but writers have priority. Readers enter one-by-one and exit en masse. The writeswitch mirrors the readswitch from Solution #1.  

![Problem 3 Output](https://raw.githubusercontent.com/ralonsogarcia05/cse4001_sync/main/problem3.png)
**Solution #3 – Dining Philosophers #1:** Deadlock is prevented by allowing only four philosophers to sit simultaneously. Five semaphores and a switch statement manage fork access, using modulo arithmetic to track neighbors.

![Problem 4 Output](https://raw.githubusercontent.com/ralonsogarcia05/cse4001_sync/main/problem4.png)
**Solution #4 – Dining Philosophers #2:** Deadlock is prevented by assigning odd philosophers to pick up the left fork first and even philosophers to pick up the right fork first, ensuring at least one leftie and rightie at the table. 

if the screenshots do not display, they are attached in the repo files.

Author
Richard Alonso Garcia

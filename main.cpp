#include <iostream>
#include <cstdlib>

void run_problem1();
void run_problem2();
void run_problem3();
void run_problem4();

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./cse4001_sync <problem#>\n";
        return 1;
    }

    int p = atoi(argv[1]);
    switch (p) {
        case 1: run_problem1(); break;
        case 2: run_problem2(); break;
        case 3: run_problem3(); break;
        case 4: run_problem4(); break;
        default:
            std::cout << "Invalid problem number.\n";
    }
}



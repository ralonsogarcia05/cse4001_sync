#include <iostream>
#include <cstdlib>
#include "semaphore_class.h"

// Forward declarations
void problem1_no_starve_readers_writers();
void problem2_writer_priority_readers_writers();
void problem3_dining_philosophers1();
void problem4_dining_philosophers2();

int main(int argc, char* argv[]) {
    if(argc != 2) {
        std::cout << "Usage: " << argv[0] << " <problem #>" << std::endl;
        return 1;
    }

    int problem = atoi(argv[1]);

    switch(problem) {
        case 1: problem1_no_starve_readers_writers(); break;
        case 2: problem2_writer_priority_readers_writers(); break;
        case 3: problem3_dining_philosophers1(); break;
        case 4: problem4_dining_philosophers2(); break;
        default: std::cout << "Invalid problem number." << std::endl; return 1;
    }

    return 0;
}

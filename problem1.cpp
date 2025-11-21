#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include "semaphore_class.h"
using namespace std;

#define NUM_READERS 5
#define NUM_WRITERS 5
#define NUM_ITERATIONS 3

Semaphore readMutex(1);
Semaphore writeMutex(1);

void* reader1(void* arg) {
    int id = *((int*)arg);
    for(int i=0;i<NUM_ITERATIONS;i++){
        readMutex.wait();
        cout << "Reader " << id << " is reading" << endl;
        sleep(1);
        readMutex.signal();
        sleep(1);
    }
    return nullptr;
}

void* writer1(void* arg) {
    int id = *((int*)arg);
    for(int i=0;i<NUM_ITERATIONS;i++){
        writeMutex.wait();
        cout << "Writer " << id << " is writing" << endl;
        sleep(1);
        writeMutex.signal();
        sleep(1);
    }
    return nullptr;
}

void problem1_no_starve_readers_writers() {
    pthread_t r[NUM_READERS], w[NUM_WRITERS];
    int ids[NUM_READERS > NUM_WRITERS ? NUM_READERS : NUM_WRITERS];
    for(int i=0;i<NUM_READERS;i++) ids[i]=i+1;
    for(int i=0;i<NUM_WRITERS;i++) ids[i]=i+1;

    for(int i=0;i<NUM_READERS;i++) pthread_create(&r[i], nullptr, reader1, &ids[i]);
    for(int i=0;i<NUM_WRITERS;i++) pthread_create(&w[i], nullptr, writer1, &ids[i]);
    for(int i=0;i<NUM_READERS;i++) pthread_join(r[i], nullptr);
    for(int i=0;i<NUM_WRITERS;i++) pthread_join(w[i], nullptr);
}

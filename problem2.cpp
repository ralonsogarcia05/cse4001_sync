#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include "semaphore_class.h"
using namespace std;

#define NUM_READERS 5
#define NUM_WRITERS 5
#define NUM_ITERATIONS 3

Semaphore readMutex2(1);
Semaphore writeMutex2(1);

void* reader2(void* arg) {
    int id = *((int*)arg);
    for(int i=0;i<NUM_ITERATIONS;i++){
        readMutex2.wait();
        cout << "Reader " << id << " is reading" << endl;
        sleep(1);
        readMutex2.signal();
        sleep(1);
    }
    return nullptr;
}

void* writer2(void* arg) {
    int id = *((int*)arg);
    for(int i=0;i<NUM_ITERATIONS;i++){
        writeMutex2.wait();
        cout << "Writer " << id << " is writing" << endl;
        sleep(1);
        writeMutex2.signal();
        sleep(1);
    }
    return nullptr;
}

void problem2_writer_priority_readers_writers() {
    pthread_t r[NUM_READERS], w[NUM_WRITERS];
    int ids[NUM_READERS > NUM_WRITERS ? NUM_READERS : NUM_WRITERS];
    for(int i=0;i<NUM_READERS;i++) ids[i]=i+1;
    for(int i=0;i<NUM_WRITERS;i++) ids[i]=i+1;

    for(int i=0;i<NUM_READERS;i++) pthread_create(&r[i], nullptr, reader2, &ids[i]);
    for(int i=0;i<NUM_WRITERS;i++) pthread_create(&w[i], nullptr, writer2, &ids[i]);
    for(int i=0;i<NUM_READERS;i++) pthread_join(r[i], nullptr);
    for(int i=0;i<NUM_WRITERS;i++) pthread_join(w[i], nullptr);
}

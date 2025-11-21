#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

#define NUM_PHILOSOPHERS 5
#define NUM_MEALS 3

void* philosopher(void* arg){
    int id = *((int*)arg);
    for(int i=0;i<NUM_MEALS;i++){
        cout << "Philosopher " << id << " is thinking" << endl;
        sleep(1);
        cout << "Philosopher " << id << " is hungry" << endl;
        sleep(1);
        cout << "Philosopher " << id << " is eating" << endl;
        sleep(1);
    }
    return nullptr;
}

void problem3_dining_philosophers1() {
    pthread_t p[NUM_PHILOSOPHERS];
    int ids[NUM_PHILOSOPHERS];
    for(int i=0;i<NUM_PHILOSOPHERS;i++) ids[i]=i+1;
    for(int i=0;i<NUM_PHILOSOPHERS;i++) pthread_create(&p[i], nullptr, philosopher, &ids[i]);
    for(int i=0;i<NUM_PHILOSOPHERS;i++) pthread_join(p[i], nullptr);
}

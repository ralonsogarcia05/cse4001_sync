#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

#define NUM_PHILOSOPHERS 5
#define NUM_MEALS 3

void* philosopher2(void* arg){
    int id = *((int*)arg);
    for(int i=0;i<NUM_MEALS;i++){
        cout << "Philosopher2 " << id << " is thinking" << endl;
        sleep(1);
        cout << "Philosopher2 " << id << " is hungry" << endl;
        sleep(1);
        cout << "Philosopher2 " << id << " is eating" << endl;
        sleep(1);
    }
    return nullptr;
}

void problem4_dining_philosophers2() {
    pthread_t p[NUM_PHILOSOPHERS];
    int ids[NUM_PHILOSOPHERS];
    for(int i=0;i<NUM_PHILOSOPHERS;i++) ids[i]=i+1;
    for(int i=0;i<NUM_PHILOSOPHERS;i++) pthread_create(&p[i], nullptr, philosopher2, &ids[i]);
    for(int i=0;i<NUM_PHILOSOPHERS;i++) pthread_join(p[i], nullptr);
}

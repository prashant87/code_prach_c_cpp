#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Define a global variable and a mutex to protect it
int sharedData = 0;
pthread_mutex_t mutex;

// Function to be executed by multiple threads
void *threadFunction(void *arg) {
    int thread_id = *((int *)arg);
    int i;

    for (i = 0; i < 10; i++) {
        // Lock the mutex before accessing the shared data
        pthread_mutex_lock(&mutex);

        // Critical section: Increment the shared data
        sharedData++;
        printf("Thread %d: Shared Data = %d\n", thread_id, sharedData);

        // Unlock the mutex after finishing the critical section
        pthread_mutex_unlock(&mutex);

        // Sleep for a short time to simulate some work
        usleep(100000); // Sleep for 100 milliseconds
    }

    return NULL;
}

int main() {
    int numThreads = 200; // Number of threads
    pthread_t threads[numThreads];
    int thread_ids[numThreads];

    // Initialize the mutex
    pthread_mutex_init(&mutex, NULL);

    // Create and launch multiple threads
    for (int i = 0; i < numThreads; i++) {
        thread_ids[i] = i;
        if (pthread_create(&threads[i], NULL, threadFunction, &thread_ids[i]) != 0) {
            perror("pthread_create");
            exit(1);
        }
    }

    // Wait for all threads to finish
    for (int i = 0; i < numThreads; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("pthread_join");
            exit(1);
        }
    }

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    printf("All threads have finished. Shared Data = %d\n", sharedData);

    return 0;
}

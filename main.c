#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

#include "stack.h"

float test(int a) {
    errno = a;
    assert(a == 5);
    int errnum = errno;
    fprintf(stderr, "Value of errno: %d\n", errnum);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening file: %s\n", strerror(errnum));

}

int main(int argc, char** argv) {

    int Queue;

    void init_queue(Queue *s);
    void enqueue(Queue *q, float value);
    float dequeue(Queue *q);
    bool is_queue_empty(Queue *q);
    float front(Queue *q);
    void clear(Queue *q);


    return (EXIT_SUCCESS);
}


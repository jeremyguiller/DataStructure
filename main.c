#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>
#include "queue.h"
#include "array_list.h"
#include "stack.h"
#include "heap.h"

float test(int a) {
    errno = a;
    assert(a == 5);
    int errnum = errno;
    fprintf(stderr, "Value of errno: %d\n", errnum);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
}

int main(int argc, char** argv) {


    void test_stack(){

    }

    void test_queue(){
        void init_queue(Queue *s);
        void enqueue(Queue *q, float value);
        float dequeue(Queue *q);
        bool is_queue_empty(Queue *q);
        float front(Queue *q);
        void clear(Queue *q);
    }

    void test_array_list(){
        void init_array_list(Array_list *l);
        void insert_at(Array_list *l, int position, float value);
        float remove_at(Array_list *l, int position);
        float get_at(Array_list *l, int position);
        void clear(Array_list *l);
    }

    void test_heap(){

    }

    return (EXIT_SUCCESS);
}


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

void test_stack(){

}

void test_queue(){
    void array_init_queue(Queue *s);
    void array_enqueue(Queue *q, float value);
    float array_dequeue(Queue *q);
    bool array_is_queue_empty(Queue *q);
    float array_front(Queue *q);
    void array_clear(Queue *q);
}

void test_array_list(){
    void array_init_array_list(Array_list *l);
    void array_insert_at(Array_list *l, int position, float value);
    float array_remove_at(Array_list *l, int position);
    float array_get_at(Array_list *l, int position);
    void array_clear(Array_list *l);
}

void test_heap(){

}

return (EXIT_SUCCESS);

int main(int argc, char** argv) {

    void test_stack();

    void test_queue();

    void test_array_list();

    void test_heap();

    return (EXIT_SUCCESS);


}


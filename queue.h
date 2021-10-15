#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H

//premier arrivé premier sortit
#define QUEUE_MAX_SIZE 100

typedef struct {
    float data[QUEUE_MAX_SIZE]; //Taille
    int index;  //Endroit dans la memoire
} Queue;


#endif /* QUEUE_H */

void array_init_queue(Queue *s);
void array_enqueue(Queue *q, float value);
float array_dequeue(Queue *q);
bool array_is_queue_empty(Queue *q);
float array_front(Queue *q); //aka peek
void array_clear(Queue *q);


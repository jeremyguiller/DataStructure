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

void init_queue(Queue *s);
void enqueue(Queue *q, float value);
float dequeue(Queue *q);

bool is_queue_empty(Queue *q);
float front(Queue *q); //aka peek
void queue_clear(Queue *q);


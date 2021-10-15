#include <stdio.h>
#include <stdlib.h>
#include <queue.h>

void init_queue(Queue *s){
    s->index = 0;
}

void enqueue(Queue *q, float value){
    for (int i = q->index; i >= 0; i--){
        q->data[i + 1] = q->data[i];
    }
    q->data[0] = value;
    q->index++;
}

float dequeue(Queue *q){
    {
        float result = q->data[q->index-1];
        q->index--;
        return result;
    }

bool is_queue_empty(Queue *q){
    return q->index == 0;
}

float front(Queue *q) { //aka peek
    return q->data[q->index-1];
}

void clear(Queue *q){
    init_queue(q);
}

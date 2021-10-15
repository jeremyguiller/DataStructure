#include <stdio.h>
#include <stdlib.h>
#include <queue.h>

void init_queue(Queue *s){
    s->index = 0;
}

void enqueue(Queue *q, float value){
    q->data[q->index] = value;
    q->index += 1;
}

float dequeue(Queue *q){
    int i;
    float a = q->data[0];

    for(i=0;i<q->index;i++) {
        q->data[i]=q->data[i+1];
    }
    return a;
}

bool is_queue_empty(Queue *q){
    int i, valmax;

    for(i=0;i<q->index;i++){
        if(q->index == NULL){
            valmax = i-1;
        }
    }
    return true;
}

float front(Queue *q) { //aka peek
    return q->data[q->index-1];
}

void clear(Queue *q){
    init_queue(q);
}

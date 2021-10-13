/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "heap.h"

void init_heap(Heap *h){
    h->index = 0;
}
bool is_heap_empty(Heap *h){
    if (h->index == 0){
        return true;
    }
    else{
        return false;
    }
}


float pop_heap(Heap *h){
    float a = h->data[0];
    for (int i = 0; i < h->index; ++i) {
        h->data[i]=h->data[i+1];
    }
    return a;
}


void push_heap(Heap *h, float value){
    h->data[h->index] = value;
}

float replace(Heap *h, float value){
    float a = h->data[0];
    h->data[0] = value;
    return a;
}

float peek_heap(Heap *h){
    return h->data[0];
}

void clear_heap(Heap *h){
    h->index = 0;
}

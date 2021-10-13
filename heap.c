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


float pop(Heap *h){
    return h->data[h->index];
}

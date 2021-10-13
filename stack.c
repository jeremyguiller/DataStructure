/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stack.h"
void init_stack(Stack *s){
    s->index = 0;
    for (int i = 0; i < STACK_MAX_SIZE; ++i) {
        s->data[i] = 0;
    }
}
void push(Stack *s, float value) {
    s->index += 1;
    s->data[s->index] = value;
}

float pop(Stack *s){
    float a = s->data[s->index];
    s->index -= 1;
    return a;
}

bool is_stack_empty(Stack *s){
    if (s->index == 0){
        return true;
    }
    else{
        return false;
    }
}
float peek(Stack *s){
    return s->data[s->index];
}
void dup(Stack *s){
    float a = s->data[s->index];
    s->index += 1;
    s->data[s->index] = a;
}

void swap(Stack *s){
    float a = s->data[s->index];
    float b = s->data[s->index-1];
    s->data[s->index] = b;
    s->data[s->index-1] = a;
}

void clear(Stack *s){
    s->index = 0;
}
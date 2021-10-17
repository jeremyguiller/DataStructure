/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stack.h"

/**
 * Permet d'initialiser la structure Stack rentrer en parametres
 * @param Stack que l'on souhaite modifier
 */
void init_stack(Stack *s){
    s->index = 0;
    for (int i = 0; i < STACK_MAX_SIZE; ++i) {
        s->data[i] = 0;
    }
}
/**
 * Permet d'ajouter une valeur à la pile
 * @param Stack que l'on souhaite modifier
 * @param float que l'on souhaite ajouter à la pile
 */
void push(Stack *s, float value) {
    s->index += 1;
    s->data[s->index] = value;
}
/**
 * Permet de recuperer la valeur au sommet
 * et l'enleve de la pile
 * @param Stack que l'on souhaite modifier
 * @return valeur en float du sommet de la pile
 */
float pop(Stack *s){
    float a = s->data[s->index];
    s->index -= 1;
    return a;
}

/**
 * Permet de verifier si la pile est vide
 * @param Stack que l'on souhaite modifier
 * @return true ou false
 */
bool is_stack_empty(Stack *s){
    if (s->index == 0){
        return true;
    }
    else{
        return false;
    }
}
/**
 * Permet de recuperer la valeur au sommet de
 * la pile sans l'enveler
 * @param Stack que l'on souhaite modifier
 * @return valeur en float du sommet de la pile
 */

float peek(Stack *s){
    return s->data[s->index];
}
/**
 * Permet de copier la valeur au sommet de la pile
 * et de la placer par dessus
 * @param Stack que l'on souhaite modifier
 */
void dup(Stack *s){
    float a = s->data[s->index];
    s->index += 1;
    s->data[s->index] = a;
}
/**
 * Permet d'inverser les deux valeurs au sommet
 * de la pile
 * @param Stack que l'on souhaite modifier
 */
void swap(Stack *s){
    float a = s->data[s->index];
    float b = s->data[s->index-1];
    s->data[s->index] = b;
    s->data[s->index-1] = a;
}
/**
 * Reinitialise un stack
 * @param Stack que l'on souhaite modifier
 */
void clear(Stack *s){
    s->index = 0;
}
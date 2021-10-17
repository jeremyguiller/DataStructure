//
// Created by j.guillerminprina on 15/10/2021.
//
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include "scripts/stack.h"
#include "scripts/queue.h"
#include "scripts/array_list.h"
#include ""





void testStack() {
    Stack *test = malloc(sizeof(Stack));
    init_stack(test);
    assert(test->index == 0);
    push(test, 2.5);
    push(test, 5.3);
    push(test, 7.58);
    float a = pop(test);
    assert((a-7.58)<0.000001);
    a = peek(test);
    assert((a-5.3)<0.000001);
    swap(test);
    a = peek(test);
    assert((a-2.5)<0.000001);
    clear(test);
    assert(is_queue_empty(test));
}
void testQueue(){
    Queue *test = malloc(sizeof (Queue));
    init_queue(test);
    enqueue(test,2.56);
    enqueue(test,8.96);
    enqueue(test,3.36);
    if (is_stack_empty(test)){printf("true");}
    else { printf("false\n");} // attendu false
    printf("la valeur de test est %.2f\n", front(test)); //valeur attendu : 2.56
    printf("la valeur de test est %.2f\n", dequeue(test)); //valeur attendu : 2.56
    printf("la valeur de test est %.2f\n", front(test)); //valeur attendu : 8.96
    queue_clear(test);

    if (is_stack_empty(test)){printf("true");}
    else { printf("false\n");} // attendu true

}

void testArraylist(){
    Array_list *test = malloc(sizeof (Array_list));
    init_array_list(test);
    array_add(test,52.25);
    array_add(test,22.14);
    array_add(test,98.25);
    printf("resultat du test : %.2f\n",array_get_at(test,2)); //resultat attendu 98.25
    array_remove_at(test,2);
    printf("resultat du test : %.2f\n",array_get_at(test,2)); //resultat attendu 0

}
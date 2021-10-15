//
// Created by j.guillerminprina on 15/10/2021.
//
#include <stdio.h>
#include "stack.h"
void testStack(){
    Stack *test;
    init_stack(test);
    push(test,2.5);
    push(test,5.3);
    push(test,7.58);
    float a = pop(test);
    printf("la valeur de a est %f",a);
    a = peek(test);
    printf("la valeur de a est %f",a);
}
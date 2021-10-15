#include <stdio.h>
#include <stdlib.h>
#include <Array_list.h>

void init_array_list(Array_list *l){
    l->index=0;
}

void insert_at(Array_list *l, int position, float value){
    l->data[position] = value;
    l->index += 1;
}

void add(Array_list *l, float value){
    l->data[l->index] = value;
}

float remove_at(Array_list *l, int position){
    int i;
    float a = l->data[0];

    for(i=0;i<l->data[position];i++) {
        l->data[i]=l->data[i+1];
    }
    return a;
}

float get_at(Array_list *l,int position){

}

void clear(Array_list *l){
    int i;

    for(i=0;i<l->data[l->index];i++) {
        l->index += 1;
        int a;
    }
}



#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define ARRAY_LIST_MAX_SIZE 100

typedef struct {
    float data[ARRAY_LIST_MAX_SIZE];
    int index;
} Array_list;


#endif /* ARRAY_LIST_H */

void init_array_list(Array_list *l);
void array_insert_at(Array_list *l, int position, float value);
void array_add(Array_list *l, float value);
float array_remove_at(Array_list *l, int position);
float array_get_at(Array_list *l,int position);
void array_clear(Array_list *l);




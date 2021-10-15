#include <stdio.h>
#include <stdlib.h>
#include <queue.h>

/* *
 * @bref Inistialisation init_queue
 * @param s : à initialiser
 */
void init_queue(Queue *s){
    s->index = 0;
}

/* *
 * @brief Empiler
 */
void enqueue(Queue *q, float value){
    for (int i = q->index; i >= 0; i--){
        q->data[i + 1] = q->data[i];
    }
    q->data[0] = value;
    q->index++;
}

/* *
 * @brief Desempiler
 */
float dequeue(Queue *q){
    {
        float result = q->data[q->index-1];
        q->index--;
        return result;
    }

/* *
 * @brief Vérifie si la file est vide
 */
bool is_queue_empty(Queue *q){
    return q->index == 0;
}

/* *
 * @bref retourne la premiere valeur de la file
 */
float front(Queue *q) { //aka peek
    return q->data[q->index-1];
}

/* *
 * @brief Effacer la file
 * @param q File à effacer
 */
void clear(Queue *q){
    init_queue(q);
}

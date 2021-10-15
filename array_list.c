#include <stdio.h>
#include <stdlib.h>
#include <Array_list.h>

/* *
 * @bref Init Array liste
 */
void init_array_list(Array_list *l){
    l->index=0;
}

/* *
 * @brief Insérer la valeur à la position
 * @param l : Array qui recevra la valeur
 * @param position : Position ou inserer
 * @param value : Valeur à ajouter
 */
void insert_at(Array_list *l, int position, float value){
    if (position > l->index){
        add(l, value);
    }
    else{
        for (int i = l->index; i >= position; i--)
        {
            l->data[i + 1] = l->data[i];
        }
        l->data[position] = value;
        l->index++;
    }
}

/* *
 * @brief Ajout de la valeur au tableau
 * @param l : Liste des tableaux
 * @param value : valeur à ajouter
 */
void add(Array_list *l, float value){
    l->data[l->index] = value;
    l->index++;
}

/* *
 * @brief Supprimer la valeur à la position
 * @param l : liste de tableaux
 * @param position : Supprimer la valeur position
 */
float remove_at(Array_list *l, int position){
    float temp = l->data[position];
    for (int i = position; i < l->index; i++){
        l->data[i] = l->data[i + 1];
    }
    l->index--;
    return temp;
}

/* *
 * @bref Recuperer la valeur
 * @param l : liste de tableaux
 * @param position : Index de la valeur à retourner
 */
float get_at(Array_list *l,int position){
    return l->data[position];
}

/* *
 * @brief Effacer la liste des tableaux
 * @param l : Liste des tableaux à effacer
 */
void clear(Array_list *l){
    init_array_list(l);
}


#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    struct _node *next;
    int value;
}node;

void add(node *start, int val){
    while(start->next != NULL){
        start = start->next;
    }
    node *szam = malloc(sizeof(node));
    start->value = val;
}

int min(node *start){
    int min = start -> value;
    while(start->next != NULL){
        if(min > start -> value){
            min = start ->value;
        }
        start = start->next;
    }
    return min;
}

int max(node *start){
    int max = start -> value;
    while(start->next != NULL){
        if(max < start -> value){
            max = start ->value;
        }
        start = start->next;
    }
    return max;
}

int sum(node *start){
    int sum=0;
    while(start -> next != NULL){
        sum = sum+start->value;
        start = start -> next;
    }
    return sum;
}

void kiir(node *start){
    while(start -> next != NULL){
        printf("%d ", start -> value);
        start = start -> next;
    }
}

void delete(node *start, int val){
    node *seged;
    while(start -> value != val && start ->next != NULL){
        seged = start;
        start = start -> next;
    }
    seged -> next = start -> next;
    free(start);
}


void freeList(node *start){
    do{
        start = start -> next;
        free(start);
    }while(start ->next != NULL);
}

int main(){
    int szam;
    scanf("%d", &szam);
    node *elso = malloc(sizeof(node));
    elso -> value = szam;
    int beolv;
    do
    {
        scanf("%d", &beolv);
        add(elso, beolv);
    } while (beolv != 0);

    printf("hello");

    kiir(elso);

    freeList(elso);
    free(elso);
}
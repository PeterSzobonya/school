#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){
    int *size = readSize();

    int **ground = makePlayGround(*size);
    
    printf("%d", ground[0][0]);

    free(ground);
    free(size);
    return 0;
}

int* readSize(){
    int *tempSize = (int*)malloc(sizeof(int));
    scanf("%d", tempSize);
    return tempSize;
}

int** makePlayGround(int size){
    int** ground = (int**)malloc(size*sizeof(size*sizeof(int)));
    for(int i=0; i<size; ++i){
        for(int j=0; j<size; ++j){
            ground[i][j] = 0;
        }
    }
    return ground;
}
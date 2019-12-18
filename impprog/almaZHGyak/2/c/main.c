#include <stdio.h>
#include <time.h>
#include "main.h"

int main(){
    int n;
    printf("Generalt lista hossza: ");
    scanf("%d", &n);
    int* t = (int*)malloc(n*sizeof(int));

    srand(time(0));
    for(int i=0; i<n; ++i){
        t[i] = (rand() % (100 +101)-101);
    }
    for(int i=0; i<n; ++i) printf("%d ",t[i]);


    printf("\n\nValogatott lista hossza: ");
    int n2;
    scanf("%d",&n2);
    int *t2 = (int*)malloc(n2*sizeof(int));
    t2=filter(t,n,n2); 
    for(int i=0; i<n2; ++i) printf("%d ",t2[i]);

    free(t2);
    free(t);
    return 0;
}
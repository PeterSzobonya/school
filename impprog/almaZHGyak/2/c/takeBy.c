#include <stdlib.h>

int* filter (int* t,int n, int n2){
    int *t2 = (int*)malloc(n2*sizeof(int));
    int i=0,j=0;

    while(i<n && j<n2){
        if(t[i] >= 0){
            t2[j] = t[i];
            ++j;
        }
        ++i;
    }
    if(j<n){
        while(j<n){
            t[j]=NULL;
            ++j;
        }
    }
    return t2;
}
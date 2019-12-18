#include <stdio.h>
#include "alma.h"

int main(){
    int n=46;
    int *k=firstNFibs(n);

    /*for(int i=0; i<n;++i){
        printf("%d ", k[i]);
    }*/
    free(k);

    int n2 = 46;
    int *k2 = (int*) malloc (n2*sizeof(unsigned long long));
    firstNFibsFixArray(n2,k2);

    for(int i=0; i<n2;++i){
        printf("%d ", k2[i]);
    }

}
#include <stdlib.h>

int* firstNFibs(int n){
    int* fibon = (int*)malloc(n*sizeof(unsigned long long));

    fibon[0] = 1;
    fibon[1] = 1;
    
    for(int i=2; i<n; ++i){
        fibon[i] = fibon[i-1] + fibon[i-2];
    }

    return fibon;
}
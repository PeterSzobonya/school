#include <stdlib.h>

void firstNFibsFixArray (int n, int *fibs){
    fibs[0] = 1;
    fibs[1] = 1;

    for(int i=2; i<n; ++i){
        fibs[i] = fibs[i-1] + fibs[i-2];
    }
}
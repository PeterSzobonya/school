#include <stdio.h>
#include "counter.c"

int main(){
    int a[5]= {1,1,2,3,4};
    int d = counter(a,5,1);
    printf("%d\n",d);
}
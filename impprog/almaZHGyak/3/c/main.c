#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){

    char ch = 'd';
    char upcase_ch = ch - ('a' - 'A');
    printf("%c",upcase_ch);

    int n1=1;
    int *t1 = (int*)malloc(n1*sizeof(int));
    t1[0] = 1;

    int n2=5;
    int *t2 = (int*)malloc(n2*sizeof(int));
    for(int i=0; i<n2; ++i){
        t2[i]=1;
    }

    int n3=5;
    int *t3 = (int*)malloc(n3*sizeof(int));
    for(int i=0; i<n3; ++i){
        t2[i]=n3-i;
    }

    int n4=4;
    int *t4 = (int*)malloc(n4*sizeof(int));
    t4[0] = 1;
    t4[1] = 2;
    t4[2] = 2;
    t4[3] = 3;

    int n5=3;
    int *t5 = (int*)malloc(n5*sizeof(int));
    t5[0] = 3;
    t5[1] = 1;
    t5[2] = 3;

    monot(n1,t1);
    monot(n2,t2);
    monot(n3,t3);
    monot(n4,t4);
    monot(n5,t5);



    free(t1);free(t2);free(t3);free(t4);free(t5);
    return 0;
}
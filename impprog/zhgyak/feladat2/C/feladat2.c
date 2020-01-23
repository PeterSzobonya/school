#include <stdio.h>
#include "feladat2.h"

int main(){
    int tomb[7] = {-2,0,5,7,11,15,23};
    int keresett1=15;
    int keresett2=16;
    int len=sizeof(tomb)/sizeof(tomb[0]);

    keres(tomb,keresett2,len);
    keres(tomb,keresett1,len);


    return 0;
}
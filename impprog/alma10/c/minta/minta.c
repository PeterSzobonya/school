#include <stdio.h>
#include <stdlib.h>
#include "fibonacchi.c"

int main(){
    int *fib = fibon(8);
    for(int i=0; i< 8; ++i){
        printf("%d\n",fib[i]);
    }

    int len=10;
    int lst[10]={1,-2,3,4,5,-6,7,-8,-9,0};
    int *t= take(lst,len,3);
    for(int i=0; i<3; ++i) printf("%d\n",t[i]);
    free(fib);
    free(t);

    int list[10]={10,9,8,7,6,5,4,3,2,1};
    bool mon = monoton(list,10);
    if(mon == true) printf("monoton\n");
    else printf("nem monoton\n");


    char string[36] = "az abba   aaaah, de joooooooooooo!!!";
    tom(string,36);
    //for(int i=0; i<34; ++i) printf("%c", string[i]);
    printf("\n");
}
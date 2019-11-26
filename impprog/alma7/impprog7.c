#include <stdio.h>
#include "impprog7.h"

int main(){
    komplex a;
    a.re = 8;
    a.im=5;
     komplex b;
    b.re=3;
    b.im=2;

    osszead(a, b);
    printf("%d + %di\n", mutatoAdd(&a,&b).re,mutatoAdd(&a,&b).im);
}

void osszead( komplex a,  komplex b){
    printf("%d + %di\n",a.re+b.re, a.im+b.im);
}

komplex mutatoAdd( komplex *a,  komplex *b){
    komplex c = {0,0};
    c.re = a -> re + b -> re;
    c.im = a -> im + b -> im;
    return c;
}
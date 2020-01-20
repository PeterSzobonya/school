#include <stdio.h>

void monot(int n, int *t){

    if(n==0 || n==1) printf("Monoton\n");
    else{
        int i=1;
        if(t[i] == t[i-1]){
            while(t[i] == t[i-1] && i<n) ++i;
        }
        if(i<n){
            if(t[i] > t[i-1]){
                while(t[i] >= t[i-1] && i<n) ++i;
            } else {
                while(t[i] <= t[i-1] && i<n) ++i;
            }
            if(i<n) printf("Nem Monoton\n");
            else printf("Monoton\n");
        } else {
            printf("Monoton\n");   
        }
    }

}
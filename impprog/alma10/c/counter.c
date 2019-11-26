#include <stdio.h>

int counter(int list[],int len,int elem){
    int db=0;
    for(int i=0; i<len; i++){
        if(list[i] == elem) ++db;
    }
    return db;
}
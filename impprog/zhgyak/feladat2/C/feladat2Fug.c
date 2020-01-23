#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int keres(int tomb[],int keres,int len){
    int id=-1;
    bool found=false;
    bool exists=true;
    //printf("%d", len);
    id=len/2;
    int previd=0;
    do{
        if(previd==id){
            exists=false;
        }
        if(keres==tomb[id]){
            found=true;
        } else if(keres > tomb[id] && id<len){
            id=(len+id-1)/2;
            //printf("%d, %d\n", id,previd);
        } else{
            id=(0+id)/2;
            //printf("%d, %d\n", id,previd);
        }

    } while(!found && exists);
    
    if(found)
        printf("%d\n", id);
    if(!exists)
        printf("%d\n",-1);
}
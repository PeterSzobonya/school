#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void unpack(char string[]){
    int len=strlen(string);
    int newLen=0;
    int first=0;
    int last=0;

    for(int i=0; i<len; i++){
        if(string[i] == '['){
            first=(int)string[i+1];
            last=(int)string[i+3];
            newLen = newLen+(last-first);
            i=i+4;
        } 
        newLen++;
    }

    char *unpacked=(char*)malloc(newLen*sizeof(char));
    int id=0;
    for(int i=0;i<len; i++){
        if(string[i] == '['){
            first=(int)string[i+1];
            last=(int)string[i+3];
            for(int j=first;j<last+1;j++){
                unpacked[id]=(char)j;
                id++;
            }
            i=i+4;
        } else{
            unpacked[id] = string[i];
            id++;
        }
    }
    

    for(int i=0; i<newLen; i++){
        printf("%c", unpacked[i]);
    }

    free(unpacked);
}
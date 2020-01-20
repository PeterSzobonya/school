#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void unzip(char *str){
    int length = strlen(str);
    int unzipLength = 0;
    int start,end;
    for(int i=0; i<length; ++i){
        if(str[i] == '['){
            start=(int)str[i+1];
            end=(int)str[i+3];
            i=i+4;
            unzipLength=unzipLength+(end-start);
        }
        ++unzipLength;
    }
    char *unzipped =(char*)malloc(unzipLength*sizeof(char));
    int id=0;
    for(int i=0; i<length; ++i){
        if(str[i] == '['){
            start=(int)str[i+1];
            end=(int)str[i+3];
            while(start <= end){
                unzipped[id] = (char) start;
                start++;
                id++;
            }
            i=i+4;
        }else{
             unzipped[id] = str[i];
             ++id;
        }
    }

    for(int i=0; i<unzipLength; ++i){
        printf("%c", unzipped[i]);
    }
    printf("\n");
}
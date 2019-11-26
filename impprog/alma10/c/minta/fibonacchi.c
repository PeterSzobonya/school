#include <stdio.h>
#include <stdbool.h>

int *fibon(int n){
    int *fib = (int*)malloc(n*sizeof(int));
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<n; ++i){
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib;
}

int *take(int* lst, int len, int n){
       int *res=(int*)malloc(n*sizeof(int));
       int db=0;
       int i=0;
       while(db<n && i<len){
           if(lst[i] >= 0){
               res[db]=lst[i];
               ++db;
           }
           ++i;
       }
       return res;
}

bool monoton(int lst[],int len){
    bool mon=true;
    bool nov=true;
    bool csok=true;
    int i=0;
    while(i<len-1 && mon == true){
        if(lst[i+1]-lst[i] >= 0 && nov != false ) nov = true;
        if(lst[i+1]-lst[i] >= 0 && nov != true) mon = false;
        if(lst[i+1]-lst[i] <= 0 && csok != false) csok = true;
        if(lst[i+1]-lst[i] <= 0 && csok != true) mon = false;
        ++i;
    }
    return mon;
}

void tom(char lst[],int len){
    int i=0;
    int j;
    int k;
    int tizesek;
    int db=0;
    int db2;
    while(i<len-1){
        if(lst[i] == lst[i+1]){
            lst[db]=lst[i];
            db++;
            j=i+1;
            db2=1;  
            while(lst[i] == lst[j]){
                ++j;
                ++db2;
            }
            //printf("%d ",db2);
            tizesek=0;
            while(db2/10 > 0){
                tizesek++;
                db2=db2/10;
            }
            if(tizesek==0){
                lst[db]=db2+'0';
                db++;
            }else{
                k=0;
                while(k<=tizesek){
                    if(k!=tizesek) {
                        lst[db]=db2/((tizesek-k)*10)+'0';
                        ++db;
                    }else{
                         lst[db]=db2%10+'0';
                        ++db;
                    }
                    ++k;
                }
            }
            i=j-1;
        }else{
            lst[db]=lst[i];
            db++;
        }
        ++i;
    }
    

    for(int i=0; i<db; ++i) printf("%c", lst[i]);

}
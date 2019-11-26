#include <stdio.h>

typedef struct matrix 
{
    int sor,oszlop;
    int container[255][255];
} matrix;


int main(){
    matrix a;
    matrix b;
    matrix c;
    a.sor=3;a.oszlop=3;a.container[a.sor][a.oszlop];
    a.container[0][0]=1;a.container[0][1]=2;a.container[0][2]=3;
    a.container[1][0]=2;a.container[1][1]=3;a.container[1][2]=1;
    a.container[2][0]=1;a.container[2][1]=1;a.container[2][2]=1;

    b.sor=3;b.oszlop=3;b.container[b.sor][b.oszlop];
    b.container[0][0]=1;b.container[0][1]=1;b.container[0][2]=1;
    b.container[1][0]=0;b.container[1][1]=0;b.container[1][2]=0;
    b.container[2][0]=1;b.container[2][1]=0;b.container[2][2]=1;

    for(int i=0; i<a.sor; ++i){
        for(int j=0; j<a.oszlop; ++j){
            c.container[i][j] = a.container[i][j] + b.container[i][j];
            printf("%d ",c.container[i][j]);
        }
        printf("\n");
    }

    return 0;
}
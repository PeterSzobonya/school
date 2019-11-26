#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[] = {1,2,3,4,5};
	int b[] = {1,2,3,4,6};
	int aSize = sizeof(a)/sizeof(a[0]);
	int bSize = sizeof(b)/sizeof(b[0]);
	
	tombok(a,b,aSize,bSize);
}

void tombok(int a[], int b[],int c,int d){
	if(c == d){
		int i=0;
		while(a[i] == b[i] && i<c)
		++i;
		if(i==c) printf("A tombok azonosak\n");
		else printf("A tombok nem azonosak\n");
	}else printf("A tombok nem azonosak");
}

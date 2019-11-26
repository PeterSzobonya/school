#include <stdio.h>

void szorzas(int* a, int* b){
	printf("%d\n", *a * *b);
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int* aPointer = &a;
	int* bPointer = &b;
	
	szorzas(aPointer, bPointer);
}

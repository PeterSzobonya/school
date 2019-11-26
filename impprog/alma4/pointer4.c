#include <stdio.h>

void csere(float* a, float*b){
	printf("%f %f\n", *b, *a);
}

int main(){
	float a,b;
	scanf("%f %f", &a, &b);
	float* aPointer = &a;
	float* bPointer = &b;
	
	csere(aPointer, bPointer);
}

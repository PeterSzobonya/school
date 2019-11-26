#include <stdio.h>

int main(){
	int alma =2;
	int* almaPointer;
	almaPointer = &alma;
	printf("%p\n", (void *)almaPointer);
}

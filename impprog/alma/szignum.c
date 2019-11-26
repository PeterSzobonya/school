#include <stdio.h>

int main() {
	float x;
	
	scanf("%f", &x);
	
	if(x == 0) printf("Ennek a szamnak a szignumja 0\n");
	else if(x > 0)	printf("Ennek a szamnak a szignumja 1\n");
	else printf("Ennek a szamnak a szignumja -1\n");
}

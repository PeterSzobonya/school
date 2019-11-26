#include <stdio.h>

int main() {
	float x;
	
	scanf("%f", &x);
	
	x = (x-32) * 5 / 9;
	
	printf("%f\n", x);
}

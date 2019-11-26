#include <stdio.h>

int main(){
	int tomb1[10] = {0};
	int tomb2[10];
	int tomb3[10] = {0,0,0,0,0,0,0,0,0,0};
	
	for(int i=0; i<10; i++) tomb2[i] = 0;
	
	for(int i=0; i<10; i++) printf("tomb1: %d, tomb2 %d, tomb3 %d\n", 
		tomb1[i], tomb2[i], tomb3[i]);
}

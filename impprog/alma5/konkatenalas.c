#include <stdio.h>

int main(){
	char a[] = "almas";
	char b[] = "pite";
	int c = (sizeof(a) + sizeof(b))/sizeof(a[0]);
	
	konkatenalas(a,b,c);
}

void konkatenalas(char* a, char* b, int c){
	int i=0;
	int j=0;
	char konkatenalt[c-1];
	while(a[i] != '\0'){
		konkatenalt[i] = a[i];
		++i;
	}
	
	while(b[j] != '\0'){
		konkatenalt[i+j] = b[j];
		++j;
	}
	
	printf("%s\n", konkatenalt);
}

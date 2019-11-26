#include <stdio.h>

int main(){
	char text[] ="kacsacsor";
	printf("%d\n", charLength(text));
}

int charLength(char* text){
	int length = 0;
	while(text[length] != '\0')
	length+=1;
	return length;
}

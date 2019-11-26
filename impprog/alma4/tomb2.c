#include <stdio.h>

int main(){
	int tomb[5];;
	
	for(int *i=tomb; i != &tomb[5]; ++i){
		scanf("%d", i);
	}	
	
	for(int i=0; i<5; i++) printf("%d ", tomb[i]);
}

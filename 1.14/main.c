#include <stdio.h>

#define LETTERS 26

#define IN 0
#define OUT 1

int main(){
	int c, cfa[LETTERS];
	
	for(int n = 0; n < LETTERS; ++n){
		cfa[n] = 0;
	}

	while((c = getchar()) != EOF){
		if(c >= 'a' && c <= 'z'){
			cfa[c-'a']++;
		}
	}
	// Horizontal bars
	for(int n = 0; n < LETTERS; ++n){
		printf("%c ", n+'a');
		for(int i = 0; i < cfa[n]; ++i){
			printf("#");
		}
		printf("\n");
	}
}
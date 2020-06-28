#include <stdio.h>

#define MAX 15

#define IN 0
#define OUT 1

int main(){
	int c, wl, state, wla[MAX];

	state = IN; 
	wl = 0;
	for(int n = 0; n < MAX; ++n){
		wla[n] = 0;
	}

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
			if(wl-1 < MAX){
				++wla[wl-1];
			}
			wl = 0;
		}
		else if(state == OUT){
			state = IN;
		}
		if(state == IN){
			++wl;
		}
	}

	// Horizontal bars
	for(int n = 0; n < MAX; ++n){
		printf("%d ", n+1);
		for(int i = 0; i < wla[n]; ++i){
			printf("#");
		}
		printf("\n");
	}
	// Vertical bars
	int maxheight = 0;
	for(int n = 0; n < MAX; n++){
		if(wla[n] > maxheight){
			maxheight = wla[n];
		}
		printf("%d ", (n+1)%10);
	}
	printf("\n");
	for(int i = 0; i < maxheight+1; i++){
		for(int n = 0; n < MAX; ++n){
			if(wla[n] > 0){
				printf("#|");
				--wla[n];
			}
			else{
				printf(" |");
			}
		}
		printf("\n");
	}
}
#include <stdio.h>

int main(){
	int c, b = 0;

	while((c = getchar()) != EOF){
		if(c == ' '){
			b = 1;
		}
		else{
			if(b){
				putchar(' ');
				b = 0;
			}
			putchar(c);
		}
	}
}
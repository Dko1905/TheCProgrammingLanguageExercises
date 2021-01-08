#include <stdio.h>

#define MAXLINE 100

const int tabspaces = 8;

int main(){
	// 8 spaces for one tab
	// 01234567
	// |  |   |
	// |  t   |
	// 0123
	//     0123
	int n = 0, c;

	while((c = getchar()) != EOF){
		int spaces = tabspaces - (n % tabspaces);
		if(c == '\t'){
			for(int i = 0; i <= spaces; ++i){
				putchar(' ');
			}
			n+=spaces+1;
		}
		else{
			if(c == '\n'){
				n = 0;
			}
			putchar(c);
			++n;
		}
	}

	return 0;
}
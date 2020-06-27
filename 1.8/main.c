#include <stdio.h>

int main(){
	int c, b = 0, t = 0, n = 0;// c, blank, tabs, newlines
	
	while((c = getchar()) != EOF){
		if(c == '\n'){
			++n;
		}
		else if(c == ' '){
			++b;
		}
		else if(c == '\t'){
			++t;
		}
	}

	printf("Counted %dblanks, %dtabs, %dnewlines\n", b, t, n);
}
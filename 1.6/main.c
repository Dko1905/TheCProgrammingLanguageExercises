#include <stdio.h>

int main(){
	int c = getchar() != EOF;
	printf("getchar() != EOF is equal to %d\n", c);
}
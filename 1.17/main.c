#include <stdio.h>

#define MAXLINE 100
#define MAXLINES 10

int getline2(char s[], int lim);
void copy(char src[], char dest[]);

int main(){
	char lines[MAXLINES][MAXLINE];
	char current[MAXLINE];
	int min = 80;
	int len;
	int freeindex = 0;

	while(freeindex < MAXLINES-1 && (len = getline2(current, MAXLINE)) > 0){
		if(len > min){
			copy(current, lines[freeindex++]);
		}
	}

	printf("Lines over %d:\n", min);
	for(int n = 0; n < freeindex; n++){
		printf("%s\n", lines[n]);
	}
	printf("\n");
}

int getline2(char s[], int lim){
	int c, i = 0;

	while(i < lim-1 && (c = getchar()) != EOF){
		s[i] = c;
		++i;
		if(c == '\n'){
			break;
		}
	}
	s[i] = '\0';
	return i;
}

void copy(char src[], char dest[]){
	int i = 0;
	while((dest[i] = src[i]) != '\0')
		++i;
}
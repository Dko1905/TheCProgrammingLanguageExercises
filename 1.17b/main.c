#include <stdio.h>

/*
Without line buffer
*/

#define MAXLINE 100
#define LIMIT 5

int getline2(char s[], int lim);

int main(){
	char line[MAXLINE];
	int len;

	while((len = getline2(line, MAXLINE)) > 0){
		if(len > LIMIT){
			printf("%s", line);
		}
	}

	return 0;
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
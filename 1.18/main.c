#include <stdio.h>

#define MAXLINE 100

#define NORMAL 0
#define SPACE 1

int getline2(char s[], int lim);

int main(){
	char line[MAXLINE];
	int n;
	int state;

	while((n = getline2(line, MAXLINE)) > 0){
		state = SPACE;
		while(0 < n--){
			if(line[n] != ' ' && line[n] != '\t' && line[n] != '\n' && state == SPACE){
				state = NORMAL;
			}
			if(state == SPACE){
				line[n] = '\0';
			}
		}
		if(line[0] != '\0'){
			printf("%s\n", line);
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
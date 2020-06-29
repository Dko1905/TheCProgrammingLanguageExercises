#include <stdio.h>

#define MAXLINE 100

int getline2(char s[], int lim);
void copy(char src[], char dest[]);

int main(){
	int current;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((current = getline2(line, MAXLINE)) > 0){
		if(current > max){
			max = current;
			copy(line, longest);
		}
	}
	if(max > 0){
		printf("The longest is %d charectors %s\n", max, longest);
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

void copy(char src[], char dest[]){
	int i = 0;
	while((dest[i] = src[i]) != '\0')
		++i;
}
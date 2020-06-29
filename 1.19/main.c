#include <stdio.h>

#define MAXLINE 100

int getline2(char s[], int lim);
void reverse(char s[]);

int main(){
	char line[MAXLINE];

	while(getline2(line, MAXLINE) > 0){
		reverse(line);
		printf("%s", line);
	}
}

void reverse(char s[]){
	int len = -1, c;
	while(s[++len] != '\0');

	for(int n = 0; n < len/2; n++){
		c = s[n];
		s[n] = s[len-1-n];
		s[len-1-n] = c;
	}
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
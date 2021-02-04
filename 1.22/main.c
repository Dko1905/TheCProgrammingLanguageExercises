#include <stdio.h>

/* Convert input of charecters and spaces into a string with appropriate 
 * number of charecters and tabs. 
 */

#define MAXLINELEN 14
#define LINEBREAKTHRES 5

int main(){
	int ch, chars = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == '\n') {
			printf("\n"); /* Break line if over threashold. */
			chars = 0;
			continue;
		} else if (chars > MAXLINELEN) {
			if (ch == ' ' || ch == '\t') {
				printf("\n"); /* Break line if over threashold. */
				chars = 0;
			} else if (chars > MAXLINELEN + LINEBREAKTHRES) {
				printf("\n"); /* Break line if over threashold. */
				chars = 0;
			}
		}
		++chars;
		printf("%c", (unsigned char)ch);
	}

	return 0;
}

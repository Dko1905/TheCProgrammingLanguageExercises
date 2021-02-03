#include <stdio.h>

/* Convert input of charecters and spaces into a string with appropriate 
 * number of charecters and tabs. 
 */

#define TPS 8 /* Tabs per space. */
#define TABCHAR '\t'
#define SPACECHAR ' '

int main(){
	int ch, chars_until_next_stop = TPS, charcount = 0, space = 0;

	/* DEBUG */
	// printf("\t\tchar\tspace\tchar c\tguide\n");

	while ((ch = getchar()) != EOF) {
		/* Cheking for newlines. */
		if (ch == (unsigned char)'\n') {
			printf("\n");
			space = 0;
			charcount = 0;
			continue;
		} else if (ch != SPACECHAR) {
			while (space-- > 0) {
				printf("%c", SPACECHAR);
			}
			space = 0;
			printf("%c", (unsigned char)ch);
		}

		/* Counting stuff. */
		if (ch == SPACECHAR) {
			++space;
		}
		++charcount;

		/* Calculating chars until next guide. */
		chars_until_next_stop = TPS - charcount;

		/* Using data to print tabs. */
		if (chars_until_next_stop == 0 && space > 0) {
			printf("%c", TABCHAR);
			space = 0;
		}

		// printf("\t\t%c\t%i\t%i\t%i\n", (unsigned char)ch, space, charcount, chars_until_next_stop);

		if (charcount >= TPS) {
			charcount = 0;
			while (space-- > 0) {
				printf("%c", SPACECHAR);
			}
			space = 0;
		}
		if (space >= TPS) {
			space = 0;
		}
	}

	return 0;
}

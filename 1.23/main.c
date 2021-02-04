#include <stdio.h>
#include <stdlib.h>

/* Convert input of charecters and spaces into a string with appropriate 
 * number of charecters and tabs. 
 */

#define READLINE_STEP_SIZE 50

/* Read line into buffer, and return buffer, this works with unlimited size lines. */
unsigned char *readline(FILE* stream);

int main() {
	unsigned char *line = NULL, ch = 0, i = 0;
	int state = 0;

	while ((line = readline(stdin)) != NULL && line != NULL + 1) {
		for (i = 0; (ch = line[i]) != '\0'; ++i) {
			if (state == 0) {
				if (ch == '/') {
					state = 1;
				}
			} else if (state == 1) {
				if (ch == '*') {
					state = 2;
				} else {
					printf("/");
					state = 0;
				}
			} else if (state == 2) {
				if (ch == '*') {
					state = 3;
				}
			} else if (state == 3) {
				if (ch == '/') {
					state = 0;
					continue;
				} else {
					state = 2;
				}
			}
			
			if (state == 0) {
				printf("%c", ch);
			}
		}
		if (state == 0)
			printf("\n");
		free(line);
	}
	
	return 0;
}

unsigned char *readline(FILE* stream) {
	size_t size = READLINE_STEP_SIZE, freep = 0;
	unsigned char *readbuffer = malloc(size);
	int ch;

	/* Check if malloc failed. */
	if (readbuffer == NULL) {
		return NULL + 1;
	}
	/* Go per character and check for newline. */
	while ((ch = getc(stream)) != EOF) {
		if (ch == '\n') {
			readbuffer[freep++] = '\0';
			break;
		} else {
			/* Realloc if no space is left, this includes terminator. */
			if (freep + 1 > (size - 1)) {
				size += READLINE_STEP_SIZE;
				unsigned char *tmp = realloc(readbuffer, size);
				if (tmp != NULL) {
					readbuffer = tmp;
				} else {
					free(readbuffer);
					return NULL + 1;
				}
			}
			readbuffer[freep++] = (unsigned char)ch;
			readbuffer[freep] = '\0';
		}
	}

	if (freep == 0) {
		free(readbuffer);
		return NULL;
	}
	return readbuffer;
}

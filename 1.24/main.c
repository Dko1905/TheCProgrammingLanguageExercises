#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFERSIZE 10

int readfile(FILE* stream, char **output);

int main() {
	char *buf = NULL;
	size_t pos, size;
	int res = readfile(stdin, &buf);

	if (res != 0) {
		if (buf != NULL)
			free(buf);
		perror("readline failed.");
		return EXIT_FAILURE;
	}

	size = strlen(buf);
	for (pos = 0; pos < size; ++pos) {

	}


	free(buf);
	return 0;
}

int readfile(FILE* stream, char **output) {
	int status = 1, ret = 0;
	size_t freep = 0; /* Free position. */
	*output = malloc(BUFFERSIZE + 1); /* +1 for terminator. */

	if (*output == NULL) {
		goto malloc_err;
	}
	(*output)[BUFFERSIZE] = '\0';

	while ((ret = fread(*output + freep, 1, BUFFERSIZE, stream)) > 0) {
		freep += ret;
		void *tmp = realloc(*output, freep + BUFFERSIZE);
		if (tmp != NULL) {
			*output = tmp;
			(*output)[freep] = '\0';
		}
	}
	/* Check for errors in the stream. */
	if (ferror(stream) == 0) {
		status = 0;
	}

malloc_err:
	return status;
}

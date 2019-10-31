#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define streq(a,b) strcmp(a,b) == 0
#define RESET printf("\x1B[0m")

void usage()
{
	printf("usage: zebra [file]\n");
	exit(1);
}

int main(int argc, const char* argv[])
{
	int c;
	int alt = 0;

	if (argc >= 2 && streq(argv[1], "--help")) {
		usage();
	}

	// TODO: files
	FILE *stream = stdin;

	while (1) {
		c = getc(stream);

		if (c == EOF)
			break;

		putc(c, stdout);

		if (c == '\n') {
			alt ^= 1;
			if (alt) {
				printf("\x1B[48;5;8m");
			}
			else {
				RESET;
			}
		}
	}

	RESET;
}

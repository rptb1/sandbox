/* main.c -- a proper hello world program! */

#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int main(int argc, char *argv[]) {
        if (puts("Hello, world!") == EOF) {
		err(EXIT_FAILURE, "Something went wrong with puts");
	}
	puts("Hello, David.");
        return EXIT_SUCCESS;
}

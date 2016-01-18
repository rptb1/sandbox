/* main.c -- a proper hello world program! */

#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int main(void) {
        if (puts("Hello, world!") == EOF)
		err(EXIT_FAILURE, "puts");
        return EXIT_SUCCESS;
}

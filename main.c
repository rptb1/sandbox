/* main.c -- a proper hello world program! */

#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int main(void) {
        if (puts("Hello, world!") == EOF)
		err(EXIT_FAILURE, "Something went wrong with puts");
        return EXIT_SUCCESS;
}

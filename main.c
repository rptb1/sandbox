/* main.c -- a proper hello world program! */

#include <stdio.h>
#include <stdlib.h>
#include <err.h>

int main(int argc, char *argv[]) {
        if (puts("Hello, world!") == EOF)
		err(EXIT_FAILURE, "puts");
        return EXIT_SUCCESS;
}

/* main.c -- a proper hello world program! */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
        if (puts("Hello, world!") == EOF)
                return EXIT_FAILURE;
        return EXIT_SUCCESS;
}

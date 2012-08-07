#include <stdio.h>
#include <stddef.h>

int main(void) {
        if (puts("Hello, world!") == EOF)
                return EXIT_FAILURE;
        return EXIT_SUCCESS;
}

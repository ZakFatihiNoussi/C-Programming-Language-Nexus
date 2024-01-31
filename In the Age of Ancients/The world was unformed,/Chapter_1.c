#include <stdio.h> // Preprocessor directive, header, puts() function
#include <stdlib.h> // General utilities, EXIT_SUCCESS MACRO

int hello() {
    return printf("%s\n", "Hello, again"); // %s placeholder for string, expect an arg or typ char * (a pointer to a null terminated string \0)
    //also don't provide user-supplied data as part of 1st arg of printf to avoid formatted output security vulnrability(seacord 2013)

}

int if_puts_printf() {
    if (printf("%s\n", "EOF works differently for printf") == EOF) {}
    return EXIT_SUCCESS;
}

int main(void) {
    if (puts("Hello, world") == EOF) { // EOF check for write error
        return EXIT_FAILURE;
    }
    hello();
    if_puts_printf();

    return EXIT_SUCCESS; // #define EXIT_SUCCESS 0
    return main(); // seg fault, dead code
}
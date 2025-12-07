
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[1024];

    printf("Enter a word or short sentence: ");
    if (fgets(input, sizeof input, stdin) == NULL) return 0;

    
    size_t len = strlen(input);
    if (len > 0 && input[len-1] == '\n') {
        input[len-1] = '\0';
        --len;
    }

    
    putchar('+');
    for (size_t i = 0; i < len + 2; ++i) putchar('-'); 
    putchar('+');
    putchar('\n');

    
    printf("| %s |\n", input);

    putchar('+');
    for (size_t i = 0; i < len + 2; ++i) putchar('-');
    putchar('+');
    putchar('\n');

    return 0;
}


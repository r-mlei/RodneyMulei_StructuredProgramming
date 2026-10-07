#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    printf("Length of the string = %zu\n", strlen(str));

    return 0;
}

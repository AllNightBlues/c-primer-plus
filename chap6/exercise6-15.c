#include <stdio.h>
#include <string.h>

int main(void) {

    char input[255];

    printf("Please enter something:");
    scanf("%s", input);

    int length = strlen(input);

    for (int i = length - 1; i >= 0; --i) {
        printf("%c", input[i]);
    }

}

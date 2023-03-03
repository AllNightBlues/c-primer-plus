#include <stdio.h>
#include <string.h>


int main(void) {

    char word[20];
    printf("Please enter a word:");
    scanf("%s", word);

    int length = strlen(word);

    for (int i = length - 1; i >= 0 ; --i) {
        printf("%c", word[i]);
    }



}
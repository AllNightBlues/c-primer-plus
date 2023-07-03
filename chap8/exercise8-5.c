#include <stdio.h>

#define MAX 100
#define MIN 1

int main(void)
{
    int guess;
    int low = MIN;
    int high =  MAX;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right, with");
    printf("\nan s if it is smaller and with an b if it is bigger.\n");
    printf("Uh...is your number %d?\n", guess);

    while ((response = getchar()) != 'y') {
        if (response == 's') {
            low = guess;
            guess = (guess + high) / 2;
        } else if (response == 'b') {
            high = guess;
            guess = (guess + low) / 2;
        } else {
            printf("Sorry, I understand only s or b.\n");
        }
        printf("Well, then, is it %d?\n", guess);

        while (getchar() != '\n') {
            continue;
        }
        if (guess == MAX - 1) {
            guess++;
        }
    }
    printf("I knew I could do it!\n");
    return 0;
}
#include <stdio.h>

#define START_OF_UPPPERCASE 65
#define END_OF_UPPERCASE 90
#define START_OF_LOWERCASE  97
#define END_OF_LOWERCASE 122

int main(void) {

    int count_of_lowercase = 0;
    int count_of_uppercase = 0;
    char ch;

    while ((ch = getchar()) != EOF) {
        if (ch >= START_OF_LOWERCASE && ch <= END_OF_LOWERCASE) {
            count_of_lowercase++;
        } else if (ch >= START_OF_UPPPERCASE && ch <= END_OF_UPPERCASE) {
            count_of_uppercase++;
        } else if (ch == '\n') {
            printf("Count of lowercase: %d\n", count_of_lowercase);
            printf("Count of uppercase: %d\n", count_of_uppercase);
        }
    }

}
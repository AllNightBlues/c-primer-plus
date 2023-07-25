#include <stdio.h>

#define MIN_OF_LOWERCASE 97
#define MAX_OF_LOWERCASE 122
#define MIN_OF_UPPERCASE 65
#define MAX_OF_UPPERCASE 90

void process();

int index_of_alphabet(char);

int main(void) {
    process();
}

void process() {
    char ch;
    while ((ch = getchar()) != EOF) {
        if ((ch >= MIN_OF_LOWERCASE && ch <= MAX_OF_LOWERCASE)
        || (ch >= MIN_OF_UPPERCASE && ch <= MAX_OF_UPPERCASE)) {
            printf("%c is a char, position: %d\n", ch, index_of_alphabet(ch));
        } else if (ch != '\n') {
            printf("%c is not a char\n", ch);
        }
    }
}

int index_of_alphabet(char ch) {
    if (ch >= MIN_OF_LOWERCASE && ch <= MAX_OF_LOWERCASE) {
        return (ch - MIN_OF_LOWERCASE + 1);
    } else if (ch >= MIN_OF_UPPERCASE && ch <= MAX_OF_UPPERCASE) {
        return (ch - MIN_OF_UPPERCASE + 1);
    } else {
        return -1;
    }
}






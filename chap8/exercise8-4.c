#include <stdio.h>
#include <ctype.h>

int main(void) {

    double average_alpha_count = 0;
    int alpha_count = 0;
    int word_count = 0;
    char ch;
    char last_ch;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            alpha_count++;
        }
        if ((isspace(ch) || ispunct(ch)) && isalpha(last_ch)) {
            word_count++;
            average_alpha_count = alpha_count / word_count;
            printf("Average alpha count of words: %f\nTotal alpha count: %d\nTotal word count: %d\n", average_alpha_count, alpha_count, word_count);
        }
        last_ch = ch;
    }

}
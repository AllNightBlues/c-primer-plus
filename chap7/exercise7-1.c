#include <stdio.h>
#include <string.h>


int main(void) {

    char ch;
    int count_of_space = 0;
    int count_of_line_break = 0;
    int count_of_other_char = 0;

    printf("Please enter an input:");
    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            count_of_space++;
        } else if (ch == '\n') {
            count_of_line_break++;
        } else {
            count_of_other_char++;
        }
    }

    printf("Count of Space: %i; Count of Line Break: %i; Count of Other Char: %i",
           count_of_space, count_of_line_break, count_of_other_char);
}
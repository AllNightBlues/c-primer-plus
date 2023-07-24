#include <stdio.h>

void chline(char, int, int);

int main(void) {
    while (1) {
        int row = 0;
        int column = 0;
        char ch;
        printf("Please input a character: ");
        scanf("%c", &ch);
        printf("Please input row: ");
        scanf("%d", &row);
        printf("Please input column: ");
        scanf("%d", &column);
        chline(ch, row, column);
        while (getchar() != '\n') {}
    }
}

void chline(char ch, int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%c", ch);
        }
        printf("\n");
    }
}
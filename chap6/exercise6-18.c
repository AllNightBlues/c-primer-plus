#include <stdio.h>

const int DUNBARS_NUMBER = 150;


int main(void) {

    int friends = 5;
    int week = 0;

    do {
        friends = (friends - (week + 1)) * 2;
        week++;
        printf("At the end of week %d Dr.Rabnud has %d friends.\n", week, friends);
    } while (friends < DUNBARS_NUMBER);

}

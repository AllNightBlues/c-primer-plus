#include <stdio.h>
int main(void)
{
    int x, y;
    x = 10;
    y = 5; /* 7th line */
    y = x + y; /* 8th line */
    x = x * y; /* 9th line */
    printf("%d %d\n", x, y);
    return 0;
}
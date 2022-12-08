#include <stdio.h>
int main(void)
{
    int a, b;
    a = 5;
    b = 2; /* 7th line */
    b = a; /* 8th line */
    a = b; /* 9th line */
    printf("%d %d\n", b, a);
    return 0;
}
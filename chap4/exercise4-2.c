#include <stdio.h>
#include <string.h>

int main(void) {

    char name[20];
    int length;

    printf("please enter your fist name:");
    scanf("%s", name);
    length = strlen(name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", length + 3, name);

}
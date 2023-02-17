#include <stdio.h>

int main(void) {

    char firstname[20];
    char lastname[20];
    printf("please enter your first name:");
    scanf("%s", firstname);
    printf("please enter your last name:");
    scanf("%s", lastname);
    printf("hello %s,%s", firstname, lastname);

}
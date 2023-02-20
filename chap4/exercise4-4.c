#include <stdio.h>

int main(void) {

    float inches;
    char name[20];

    printf("please enter your name and inches:");
    scanf("%f%s", &inches, name);

    printf("%s, you are %f feet tall", name, inches / 12);


}
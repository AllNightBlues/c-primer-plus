#include <stdio.h>

int main(void) {

    int age;
    printf("please input your age:\n");
    scanf("%d", &age);
    printf("your age of seconds is:%e\n", age * 3.156E7);

}
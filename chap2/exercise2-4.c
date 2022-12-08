#include <stdio.h>

void jolly();

void deny();

int main(void) {
    int ageOfYear = 30;
    jolly();
    jolly();
    jolly();
    deny();
}

void deny() {
    printf("Which nobody can deny!\n");
}

void jolly() {
    printf("For he's a jolly goood fellow!\n");
}

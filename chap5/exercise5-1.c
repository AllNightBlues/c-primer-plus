#include <stdio.h>

const int SIXTY = 60;

int main(void) {

    int minutes;

    printf("please enter minutes:");
    scanf("%d", &minutes);
    printf("it is %d hours and %d minutes", minutes / SIXTY , minutes % SIXTY);



}
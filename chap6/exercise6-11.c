#include <stdio.h>


int main(void) {

    int integers[8];

    printf("Please enter a size-8 array of integers:\n");

    for (int i = 0; i < 8; ++i) {
        scanf("%d", &integers[i]);
    }

    printf("The array in reverse order:\n");
    for (int i = 7; i >= 0; --i) {
        printf("%d ", integers[i]);
    }

}

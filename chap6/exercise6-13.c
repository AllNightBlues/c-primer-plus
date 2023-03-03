#include <stdio.h>
#include <math.h>


int main(void) {

    int array[8];

    for (int i = 0; i < 8; ++i) {
        array[i] = pow(2, i);
    }

    int i = 7;
    do {
        printf("%d ", array[i]);
    } while (i-- > 0);

}

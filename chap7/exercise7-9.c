#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int input = 0;
    bool num_is_prime = true;

    printf("Please input an integer bigger than 0:\n");
    scanf("%d", &input);
    printf("All prime numbers smaller than or equal to %d:\n", input);

    if (input == 1) {
        printf("no prime number");
    } else {
        for (int i = 2; i <= input; ++i) {
            num_is_prime = true;
            for (int j = 2 ; (j * j) <= i; ++j) {
                //If this number can only be divided by 1 and itself exactly...
                if (i % j == 0) {
                    num_is_prime = false;
                    break;
                }
            }
            if (num_is_prime == true) {
                printf("%d ", i);
            }
        }
    }

}
#include <stdio.h>


int main(void) {

    int input;
    int sum_of_even = 0;
    int count_of_even = 0;
    int sum_of_odd = 0;
    int count_of_odd = 0;

    printf("Please enter a number:");
    while (scanf("%i", &input)) {
        if (input == 0) {
            break;
        } else if (input % 2 == 0) {
            sum_of_even++;
            count_of_even++;
        } else if (input % 2 == 1) {
            sum_of_odd++;
            count_of_odd++;
        }
        printf("Please enter a number:");
    }

    printf("The count of even: %i, The average of even: %f\n", count_of_even, (float)sum_of_even / (float)count_of_even);
    printf("The count of odd: %i, The average of odd: %f\n", count_of_odd, (float)sum_of_odd / (float)count_of_odd);

}
#include <stdio.h>


int main(void) {

    int first_input;
    int second_input;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &first_input);
    printf("Now enter the first operand:");
    scanf("%d", &second_input);

    printf("%d % %d is %d\n", second_input, first_input, second_input % first_input);

    while (first_input > 0) {
        printf("Enter next number for the first operand:(<= 0 to quit):");
        scanf("%d", &first_input);
        if (first_input <= 0) {
            printf("Done");
            break;
        }
        printf("%d % %d is %d\n", second_input, first_input, second_input % first_input);
    }

}
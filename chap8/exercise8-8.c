#include <stdio.h>

#define ADD 'a'
#define SUBTRACT 's'
#define MULTIPLY 'm'
#define DIVIDE 'd'
#define QUIT 'q'

int main(void) {

    char choice;
    float first_number;
    float second_number;

    while (choice != QUIT) {
        printf("Enter the operation of your choice:\na. add         "
               "s. subtract\nm. multiply    d. divide   \nq. quit\n");
        scanf("%c", &choice);

        if (choice == QUIT) {
            printf("Bye.\n");
            return 0;
        }

        printf("Enter first number: ");
        while (scanf("%f", &first_number) != 1) {
            printf("\nPlease enter a number, such as 2.5, -1.78E8, or 3:");
            while (getchar() != '\n') {}
        }

        printf("\nEnter second number: ");
        while (scanf("%f", &second_number) != 1) {
            printf("\nPlease enter a number, such as 2.5, -1.78E8, or 3: ");
            while (getchar() != '\n') {}
        }

        while (choice == DIVIDE && second_number == 0) {
            printf("\nPlease enter a number other than 0: ");
            scanf("%f", &second_number);
        }

        switch (choice) {
            case ADD:
                printf("%f + %f = %f\n", first_number, second_number, first_number + second_number);
                break;
            case SUBTRACT:
                printf("%f - %f = %f\n", first_number, second_number, first_number - second_number);
                break;
            case MULTIPLY:
                printf("%f * %f = %f\n", first_number, second_number, first_number * second_number);
                break;
            case DIVIDE:
                printf("%f / %f = %f\n", first_number, second_number, first_number / second_number);
                break;
        }
        while (getchar() != '\n') {}
    }



}
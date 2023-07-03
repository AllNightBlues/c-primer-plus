#include <stdio.h>

#define SALARY_PER_HOUR_1 8.75
#define SALARY_PER_HOUR_2 9.33
#define SALARY_PER_HOUR_3 10.00
#define SALARY_PER_HOUR_4 11.20

#define OVERTIME_RATE 1.5
#define FIRST_LEVEL_TAX 300
#define SECOND_LEVEL_TAX 450
#define FIRST_LEVEL_TAX_RATE 0.15
#define SECOND_LEVEL_TAX_RATE 0.20
#define THIRD_LEVEL_TAX_RATE 0.25
#define REGULAR_WORKING_HOURS 40

int main(void) {

    char choice = 1;
    float salary_per_hour = 0;
    float working_hours = 0;
    float overtime_hours = 0;
    float total_salary = 0;
    float taxes = 0;
    float net_income = 0;

    while ((choice != '5')) {
        printf("*********************************************************\n"
               "Enter the number corresponding to the desired pay rate or action:\n"
               "1) $8.75/hr                  2) $9.33/hr\n"
               "3) $10.00/hr                  4) $11.20/hr\n"
               "5) quit\n*********************************************************\n");
        scanf("%c", &choice);
        switch (choice) {
            case '1':
                salary_per_hour = SALARY_PER_HOUR_1;
                break;
            case '2':
                salary_per_hour = SALARY_PER_HOUR_2;
                break;
            case '3':
                salary_per_hour = SALARY_PER_HOUR_3;
                break;
            case '4':
                salary_per_hour = SALARY_PER_HOUR_4;
                break;
            case '5':
                continue;
            default:
                printf("Please input the right option!\n");
                continue;
        }

        printf("Please input your working hours:\n");
        scanf("%f", &working_hours);

        if (working_hours > REGULAR_WORKING_HOURS) {
            overtime_hours = (working_hours - REGULAR_WORKING_HOURS) * OVERTIME_RATE;
            total_salary = salary_per_hour * (REGULAR_WORKING_HOURS + overtime_hours);
        } else {
            total_salary = salary_per_hour * working_hours;
        }

        if (total_salary <= FIRST_LEVEL_TAX) {
            taxes = total_salary * FIRST_LEVEL_TAX_RATE;
        } else if (total_salary <= SECOND_LEVEL_TAX) {
            taxes = FIRST_LEVEL_TAX * FIRST_LEVEL_TAX_RATE
                    + (total_salary - FIRST_LEVEL_TAX) * SECOND_LEVEL_TAX_RATE;
        } else {
            taxes = FIRST_LEVEL_TAX * FIRST_LEVEL_TAX_RATE
                    + (SECOND_LEVEL_TAX - FIRST_LEVEL_TAX) * SECOND_LEVEL_TAX_RATE
                    + (total_salary - SECOND_LEVEL_TAX) * THIRD_LEVEL_TAX_RATE;
        }

        net_income = total_salary - taxes;
        printf("total_salary: %.2f, taxes: %.2f, net_income: %.2f\n", total_salary, taxes, net_income);
        while (getchar() != '\n') {}
    }
    printf("Program ended.");
}
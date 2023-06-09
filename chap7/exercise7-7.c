#include <stdio.h>

#define SALARY_PER_HOUR 1000
#define OVERTIME_RATE 1.5
#define FIRST_LEVEL_TAX 300
#define SECOND_LEVEL_TAX 450
#define FIRST_LEVEL_TAX_RATE 0.15
#define SECOND_LEVEL_TAX_RATE 0.20
#define THIRD_LEVEL_TAX_RATE 0.25
#define REGULAR_WORKING_HOURS 40

int main(void) {

    float working_hours = 0;
    float overtime_hours = 0;
    float total_salary = 0;
    float taxes = 0;
    float net_income = 0;

    printf("Please input your working hours:\n");
    scanf("%f", &working_hours);

    if (working_hours > REGULAR_WORKING_HOURS) {
        overtime_hours = (working_hours - REGULAR_WORKING_HOURS) * OVERTIME_RATE;
        total_salary = SALARY_PER_HOUR * (REGULAR_WORKING_HOURS + overtime_hours);
    } else {
        total_salary = SALARY_PER_HOUR * working_hours;
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
    printf("total_salary: %.2f, taxes: %.2f, net_income: %.2f", total_salary, taxes, net_income);




}
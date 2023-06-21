#include <stdio.h>
#include <stdbool.h>

#define ARTICHOKE 'a'
#define BEET 'b'
#define CARROT 'c'
#define SUMMARIZE 'q'
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_RATE 0.05
#define DISCOUNT_THRESHHOLD 100
#define EXTRA_FEE_FIRST_LEVEL 5
#define EXTRA_FEE_FIRST_LEVEL_AMOUNT 6.5
#define EXTRA_FEE_SECOND_LEVEL 20
#define EXTRA_FEE_SECOND_LEVEL_AMOUNT 14
#define EXTRA_FEE_PER_POUND_THIRD_LEVEL 0.5

int main(void) {

    float weight_artichoke = 0;
    float weight_beet = 0;
    float weight_carrot = 0;
    float total_artichoke = 0;
    float total_beet = 0;
    float total_carrot = 0;
    float goods_total = 0;
    float grand_total = 0;
    float grand_weight = 0;
    float discount = 0;
    float freight = 0;
    float input_weight = 0;

    char ch = SUMMARIZE;

    while(true) {
        printf("Please input one of the following char:\na.artichoke  b.beet  c.carrot  q.summarize\n");
        ch = getchar();
        if (ch == SUMMARIZE) {
            printf("summarizing...\n");
            break;
        }
        printf("Please input weight of your choice:\n");
        scanf("%f", &input_weight);
        switch (ch) {
            case ARTICHOKE:
                weight_artichoke += input_weight;
                printf("Weight of artichoke: %f pound(s)\n", weight_artichoke);
                break;
            case BEET:
                weight_beet += input_weight;
                printf("Weight of beet: %f pound(s)\n", weight_beet);
                break;
            case CARROT:
                weight_carrot += input_weight;
                printf("Weight of carrot: %f pound(s)\n", weight_carrot);
                break;
            default:
                printf("Please input a vaild choice:\n");
                break;
        }
    }
    grand_weight = weight_artichoke + weight_beet + weight_carrot;
    total_artichoke = weight_artichoke * ARTICHOKE_PRICE;
    total_beet = weight_beet * BEET_PRICE;
    total_carrot = weight_carrot * CARROT_PRICE;
    goods_total = total_artichoke + total_beet + total_carrot;

    if (goods_total >= DISCOUNT_THRESHHOLD) {
        discount = goods_total * DISCOUNT_RATE;
    }

    if (grand_weight <= EXTRA_FEE_FIRST_LEVEL) {
        freight = EXTRA_FEE_FIRST_LEVEL_AMOUNT;
    } else if (grand_weight > EXTRA_FEE_FIRST_LEVEL && grand_weight <= EXTRA_FEE_SECOND_LEVEL) {
        freight = EXTRA_FEE_SECOND_LEVEL_AMOUNT;
    } else {
        freight = EXTRA_FEE_SECOND_LEVEL_AMOUNT + (grand_weight - EXTRA_FEE_SECOND_LEVEL) * EXTRA_FEE_PER_POUND_THIRD_LEVEL;
    }
    grand_total = goods_total - discount + freight;

    printf("Details: artichoke: $%f/pd, beet: $%f/pd, carrot: $%f/pd\n"
           "total weight: %f\n"
           "total amount of goods: %f\n"
           "total amount of order: %f\n"
           "discount: %f\n"
           "freight and package fee: %f", ARTICHOKE_PRICE, BEET_PRICE, CARROT_PRICE, grand_weight, goods_total, grand_total, discount, freight);

}
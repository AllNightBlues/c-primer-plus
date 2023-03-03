#include <stdio.h>
#include <math.h>


int main(void) {

    float sum_of_seq1 = 1.0;
    float sum_of_seq2 = 1.0;
    int calc_count;

    printf("Please enter calc_count:");

    while (scanf("%d", &calc_count)) {
        for (int i = 1; i <= calc_count; ++i) {
            sum_of_seq1 += 1.0 / (1.0 * (calc_count + 1));
        }
        for (int i = 1; i <= calc_count ; ++i) {
            sum_of_seq2 += pow(-1,(calc_count % 2)) * 1.0 / (1.0 * (calc_count + 1));
        }

        printf("The result of sequence 1: %f\n", sum_of_seq1);
        printf("The result of sequence 2: %f\n", sum_of_seq2);
        printf("Enter another count to continue:\n");
        sum_of_seq1 = 1.0;
        sum_of_seq2 = 1.0;
    }





}

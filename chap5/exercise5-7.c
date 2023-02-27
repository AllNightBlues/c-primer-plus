#include <stdio.h>

int get_cube(int num);

int main(void) {

    int num;
    printf("please enter a number:");
    scanf("%d", &num);
    get_cube(num);

}

int get_cube(int num) {
    int cube;
    cube = num * num * num;
    printf("cube of %d is %d", num, cube);
}
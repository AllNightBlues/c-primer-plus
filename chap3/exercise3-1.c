#include <stdio.h>

int main(void) {
    //this is the biggest value of type int
    int intMax = 2147483647;
    //what happens if we add one to intMax
    printf("%d %d\n", intMax, intMax + 1);
    //this is the biggest value of float
    float floatMax = 3.4E38;
    //what happens if we multiply 100.0f to floatMax
    printf("%e %e\n", floatMax, floatMax * 100.0f);
    //this is the smallest value of float
    float floatMin = 3.4E-38;
    //what happens if we divide floatMin by 100.0f
    printf("%e %e\n", floatMin, floatMin / 100.0f);

}
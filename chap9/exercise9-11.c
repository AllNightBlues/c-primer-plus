#include <stdio.h>

void Fibonacci(int);

int main(void) {
    int n;
    printf("Please input the sequence number of Fibonacci sequence: ");
    while ((scanf("%d", &n)) == 1) {
        Fibonacci(n);
    }
}

void Fibonacci(int n) {
    int n1 = 0;
    int n2 = 1;
    int result = 0;
    if (n == 0 || n == 1) {
        printf("The number: %d\n", n);
        return;
    }
    for (int i = 2; i <= n; ++i) {
        result = n1 + n2;
        n1 = n2;
        n2 = result;
    }
    printf("The number: %d\n", result);
}

/* F0=0，F1=1，Fn=Fn-1+Fn-2（n>=2，n∈N*） */

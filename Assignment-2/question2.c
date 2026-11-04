
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
        printf("Enter a number from 0 to 20\n");
    else
        printf("Factorial = %llu\n", factorial(n));

    return 0;
}

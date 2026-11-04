
#include <stdio.h>

unsigned long long power(int n) {
    if (n == 0)
        return 1;
    return 2 * power(n - 1);
}

int main() {
    int n;

    printf("Enter power (0-63): ");
    scanf("%d", &n);

    if (n < 0 || n > 63)
        printf("Enter a number from 0 to 63\n");
    else
        printf("2^%d = %llu\n", n, power(n));

    return 0;
}

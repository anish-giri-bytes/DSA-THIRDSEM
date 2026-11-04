
#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter number of terms (1-40): ");
    scanf("%d", &n);

    if (n < 1 || n > 40) {
        printf("Enter a number from 1 to 40\n");
        return 0;
    }

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++)
        printf("%llu ", fibonacci(i));

    printf("\n");
    return 0;
}

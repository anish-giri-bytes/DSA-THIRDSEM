
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0)
        printf("GCD is undefined\n");
    else
        printf("GCD = %d\n", gcd(a, b));

    return 0;
}

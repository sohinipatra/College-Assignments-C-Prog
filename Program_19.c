#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Single ternary operator line to find the maximum
    (a > b) ? printf("%d is greater\n", a) : printf("%d is greater\n", b);

    return 0;
}

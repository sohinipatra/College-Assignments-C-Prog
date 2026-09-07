#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d,%d", a, b);
    for (int i = 3; i <= n; i++) {
        c= a+b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}


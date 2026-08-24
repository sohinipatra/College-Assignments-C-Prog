#include <stdio.h>

int main() {
    int a, b, temp;

    // Take input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // One-line swap using the comma operator
    temp = a, a = b, b = temp;

    // Display the swapped results
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

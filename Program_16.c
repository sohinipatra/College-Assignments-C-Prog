#include <stdio.h>

int main() 
{
    int num, first, second, third, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extracting each digit using / and %
    first  = num / 100;          // Gets the 1st digit
    second = (num / 10) % 10;    // Gets the 2nd digit
    third  = num % 10;           // Gets the 3rd digit

    // Adding them up
    sum = first + second + third;

    printf("Sum of digits = %d\n", sum);

    return 0;
}

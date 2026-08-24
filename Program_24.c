#include <stdio.h>

int main() {
    int year;

    printf("Enter a 4-digit year: ");
    scanf("%d", &year);

    (year % 400 == 0) ? printf("%d is a leap year.\n", year) : 
    (year % 100 == 0) ? printf("%d is not a leap year.\n", year) : 
    (year % 4 == 0) ? printf("%d is a leap year.\n", year) : 
    printf("%d is not a leap year.\n", year);

    return 0;
}

#include <stdio.h>

int main() {
    float basic, monthly, annual;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    monthly = basic + (0.10 * basic) + (0.50 * basic) + 5000;
    annual = monthly * 12;

    printf("Annual Salary: %f\n", annual);

    return 0;
}

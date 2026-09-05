#include <stdio.h>

int main()
{
    // Fixed: Changed 'income-tax' to 'income_tax' so C doesn't think it is subtraction
    float income, tax, income_tax;

    printf("enter the annual income: ");
    scanf("%f", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * income;
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.2 * income;
    }
    else
    {
        tax = 0.3 * income;
    }

    income_tax = income - tax;

    // Added: Display statements required by the question prompt
    printf("Tax amount: %.2f\n", tax);
    printf("Income after tax: %.2f\n", income_tax);

    return 0;
}
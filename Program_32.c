#include <stdio.h>

int main() {
    int total_days, years, months, days;

    printf("Enter total age in days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    months = (total_days % 365) / 30;
    days = (total_days % 365) % 30;

    if (years > 0) {
        printf("Age: %d Years, %d Months, %d Days\n", years, months, days);
    } else if (months > 0) {
        printf("Age: %d Months, %d Days\n", months, days);
    } else {
        printf("Age: %d Days\n", days);
    }

    return 0;
}
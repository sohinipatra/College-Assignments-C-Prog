#include <stdio.h>

int main() {
    int e;
    float total_bill = 0;

    printf("Enter the meter reading: ");
    scanf("%d", &e);

    if (e <= 100) {
        total_bill = e * 10;
    } 
    else if (e <= 150) {
        total_bill = (100 * 10) + ((e - 100) * 15);
    } 
    else if (e <= 200) {
        total_bill = (100 * 10) + (50 * 15) + ((e - 150) * 20);
    } 
    else {
        total_bill = (100 * 10) + (50 * 15) + (50 * 20) + ((e - 200) * 25);
    }

   
    printf("Total Bill: %.2f\n", total_bill); 

    return 0;
}
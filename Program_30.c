#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter H for Heads and T for Tails: ");
    scanf(" %c", &ch);

    
    if (ch == 'H' || ch == 'h') {
        printf("Captain 1 wins\n");
    } else if (ch == 'T' || ch == 't') {
        printf("Captain 2 wins\n");
    } else {
        printf("Invalid input! Please enter H or T.\n");
    }

    return 0;
}
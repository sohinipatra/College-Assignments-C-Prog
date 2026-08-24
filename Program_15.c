#include <stdio.h>
#include <math.h>

int main() {
    // STEP 1: Declare variables for coefficients and roots
    float a, b, c;
    float discriminant, root1, root2;

    // STEP 2: Get user input for a, b, and c
    printf("Enter values for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // STEP 3: Check if the equation is quadratic
    // If 'a' is 0, we cannot divide by (2 * a) later
    if (a == 0) {
        printf("Error: 'a' cannot be 0 in a quadratic equation.\n");
        return 0; 
    }

    // STEP 4: Calculate the discriminant (b^2 - 4ac)
    discriminant = (b * b) - (4 * a * c);

    // STEP 5: Determine the nature of the roots based on the discriminant
    if (discriminant < 0) {
        // Case 1: Discriminant is negative (imaginary roots)
        printf("The roots are imaginary numbers.\n");
    } 
    else if (discriminant == 0) {
        // Case 2: Discriminant is exactly zero (one real repeated root)
        root1 = -b / (2 * a);
        printf("The equation has one repeated root.\n");
        printf("Root = %f\n", root1);
    } 
    else {
        // Case 3: Discriminant is positive (two distinct real roots)
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("The equation has two distinct real roots.\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    }

    return 0;
}
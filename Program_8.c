#include <stdio.h>

int main() 
{
    float r, l, b, s, base, h;
    
    // 1. Get all inputs from the user first
    printf("enter radius: ");
    scanf("%f", &r);
    
    printf("enter length: ");
    scanf("%f", &l);
    
    printf("enter breadth: ");
    scanf("%f", &b);
    
    printf("enter side: ");
    scanf("%f", &s);
    
    printf("enter base: ");
    scanf("%f", &base);
    
    printf("enter height: ");
    scanf("%f", &h);
    
    // 2. Perform the calculations AFTER getting the inputs
    float area_circle = 3.14 * r * r;
    float area_rect = l * b;
    float area_sq = s * s;
    float area_tri = 0.5 * base * h;
    
    // 3. Print the final calculated answers
    printf("\nThe area of circle is: %f\n", area_circle);
    printf("The area of rectangle is: %f\n", area_rect);
    printf("The area of square is: %f\n", area_sq);
    printf("The area of triangle is: %f\n", area_tri);
    
    return 0;
}
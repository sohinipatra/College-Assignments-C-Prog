#include <stdio.h>
int main()
{
    float p, r, t;
    float si;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    
    printf("The simple interest is: %f\n", si);
    
    return 0;
}
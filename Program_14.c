#include <stdio.h>
#include <math.h>

int main() 
{
    double num, floorVal, ceilVal;
    
    printf("Enter a decimal number: ");
    scanf("%lf", &num);
    
   
    
    
    printf("Floor Value: %f\n", floor(num));
    printf("Ceiling Value: %f\n", ceil(num));
    
    return 0;
}

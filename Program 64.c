#include <stdio.h>
#include <math.h>
void type(float a, float b, float c)
{
  if(a == b && b == c)
    printf("Equilateral Triangle \n");
else if (a == b || b == c || a == c)
  printf("Isosceles Triangle \n");
else 
printf ("Scalene Triangle \n");
}
float area(float a, float b, float c)
{
  float s =(a+b+c)/2;
return sqrt (s*(s_a)*(s_b)*(s_c));
}
int main()
{
  float a b,c;
printf("Enter three sides:");
scanf("%f%f%f"  &a, &b, &c);
if ((a+b>c)&&(a+c>b)&&(b+c>a))
{
type(a,b c);
printf("Area = %2f", area(a,b,c));
}else{
printf("Invalid triangle");
}
return 0;
}

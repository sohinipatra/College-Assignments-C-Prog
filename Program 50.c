#include <stdio.h>
int main ()
{
  char OP;
float a,b;
printf ("Enter operator: ")
  scanf("%c", &OP);
printf("Enter two numbers: ");
scanf("%f %f" , &a, &b);
switch (OP)
{
case '+':
  printf("Result = %f\n", a+b);
  break;
case '_'
  printf("Result = %f\n", a_b);
  break;
case '*':
  printf("Result = %f\n", a*b);
  break;
case '/':
  if ( b! = 0)
{
  printf("Result = %f\n", a/b);
}
else
{
printf("Error: Division by Zero\n");
}
break;
default:
printf("Invalid operator\n");
}
retirn 0;
}

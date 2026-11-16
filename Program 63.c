#include <stdio.h>
int hcf(int a, int b)
{
  for(int i=1; i<=a && i<=b; i++)
{
if(a%i == 0 && b%i == 0)
  h = i;
}
return h;
}
int lcm(int a, int b)
{
  int max =(a>b)?a:b;
while (1)
{
if(max%a == 0 && max%b == 0)
  return max;
max++;
}
}
int main ()
{
  int a, b;
printf("Enter two numbers:");
scanf("%d%d", &a, &b);
printf ("HCF = %d\nLCM = %d", hcf(a b), lcm(a,b));
return 0;
}

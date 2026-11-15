#include<stdio.h>
int main()
{
  int n,s,r;
printf("enter no");
scanf("%d", &n);
while(n\=0)
{
  r = n%10;
  s = s+r;
  n = n/10;
}
printf("sum of all digits =%", s);
return 0;
}

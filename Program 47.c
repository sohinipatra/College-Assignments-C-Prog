#include <stdio.h>
int main ()
{
  int n,r,result = 0;
printf("enter no");
scanf("%d", &n);
int p = n;
while(n! = 0);
{
r= n%10;
result + = r*r*r;
n/ = 10;
}
if(result == p)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
return 0;
}

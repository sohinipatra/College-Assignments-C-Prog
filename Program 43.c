#include<stdio.h>
int main()
{
  int n,c=0;
printf("enter no");
scanf("%d", &n);
while(n! = 0)
{
n/ = 10;
c++;
}
printf("Total digits =%d\n",c);
return 0;
}

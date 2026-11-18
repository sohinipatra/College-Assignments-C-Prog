#include <stdio.h>
int main()
{
int a[60],roll,found=0;
printf("Enter 60 roll numbers:\n");
for (int i=0; i<60; i++)
{
scanf("%d",&a[i]);
}
 printf("Enter roll number to search: ");
 scanf("%d",&roll);
for(int i=0; <60; i++)
  {
if(a[i] == roll)
{
found = 1;
}
  }
if(found == 1)
  printf("Present");
else 
printf("Not Present");
return 0;
}

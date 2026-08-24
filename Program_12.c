#include<stdio.h>
int  main()
{
	int a,b;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("the number is %d \n",a);
	printf("the number is %d \n ",b);
	
	return 0;
}
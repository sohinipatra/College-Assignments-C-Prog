#include<stdio.h>
int  main()
{
	int a,b,c;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	
	printf("the number is %d \n",a);
	printf("the number is %d \n ",b);
	
	return 0;
}